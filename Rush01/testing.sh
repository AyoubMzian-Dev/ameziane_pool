#!/bin/bash

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Counters
TOTAL_TESTS=0
PASSED_TESTS=0
FAILED_TESTS=0

# Function to print test header
print_header() {
    echo -e "\n${BLUE}=== $1 ===${NC}"
}

# Function to print test result
print_result() {
    local test_name="$1"
    local expected="$2"
    local actual="$3"
    local status="$4"
    
    TOTAL_TESTS=$((TOTAL_TESTS + 1))
    
    if [ "$status" = "PASS" ]; then
        echo -e "${GREEN}✓ PASS${NC}: $test_name"
        PASSED_TESTS=$((PASSED_TESTS + 1))
    else
        echo -e "${RED}✗ FAIL${NC}: $test_name"
        echo -e "  ${YELLOW}Expected:${NC}"
        echo "$expected" | sed 's/^/    /'
        echo -e "  ${YELLOW}Actual:${NC}"
        echo "$actual" | sed 's/^/    /'
        FAILED_TESTS=$((FAILED_TESTS + 1))
    fi
}

# Function to test a case
test_case() {
    local test_name="$1"
    local input="$2"
    local expected_output="$3"
    
    # Run the program and capture output
    actual_output=$(./rush01 "$input" 2>&1)
    exit_code=$?
    
    # Compare output
    if [ "$actual_output" = "$expected_output" ]; then
        print_result "$test_name" "$expected_output" "$actual_output" "PASS"
    else
        print_result "$test_name" "$expected_output" "$actual_output" "FAIL"
    fi
}

# Function to validate grid output format
validate_grid_format() {
    local output="$1"
    local line_count=$(echo "$output" | wc -l)
    
    # Should have exactly 4 lines
    if [ $line_count -ne 4 ]; then
        return 1
    fi
    
    # Check each line format
    local line_num=1
    echo "$output" | while read line; do
        # Each line should have format: "N N N N" where N is 1-4
        if ! echo "$line" | grep -qE '^[1-4] [1-4] [1-4] [1-4]$'; then
            return 1
        fi
        line_num=$((line_num + 1))
    done
    
    return $?
}

# Function to check if grid is valid Latin square
check_latin_square() {
    local grid="$1"
    
    # Extract grid into array
    local -a grid_array
    local row=0
    echo "$grid" | while read line; do
        local col=0
        for num in $line; do
            grid_array[$((row*4 + col))]=$num
            col=$((col + 1))
        done
        row=$((row + 1))
    done
    
    # Check rows for duplicates
    for i in {0..3}; do
        local row_nums=""
        for j in {0..3}; do
            local idx=$((i*4 + j))
            row_nums="$row_nums ${grid_array[$idx]}"
        done
        local sorted_row=$(echo $row_nums | tr ' ' '\n' | sort -n | tr '\n' ' ')
        if [ "$sorted_row" != " 1 2 3 4 " ]; then
            return 1
        fi
    done
    
    # Check columns for duplicates
    for j in {0..3}; do
        local col_nums=""
        for i in {0..3}; do
            local idx=$((i*4 + j))
            col_nums="$col_nums ${grid_array[$idx]}"
        done
        local sorted_col=$(echo $col_nums | tr ' ' '\n' | sort -n | tr '\n' ' ')
        if [ "$sorted_col" != " 1 2 3 4 " ]; then
            return 1
        fi
    done
    
    return 0
}

# Compilation test
print_header "COMPILATION TEST"
echo "Compiling rush01..."

# Compile with required flags
if cc -Wall -Wextra -Werror -o rush01 *.c 2>/dev/null; then
    echo -e "${GREEN}✓ Compilation successful${NC}"
else
    echo -e "${RED}✗ Compilation failed${NC}"
    echo "Please fix compilation errors before running tests."
    exit 1
fi

# Basic functionality tests
print_header "BASIC FUNCTIONALITY TESTS"

# Test 1: Given example from subject
test_case "Subject Example" \
    "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" \
    "1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3"

# Test 2: Simple case - all clues are 4 (ascending order)
test_case "All Clues 4 (Top-Left)" \
    "4 4 4 4 1 1 1 1 4 4 4 4 1 1 1 1" \
    "1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3"

# Test 3: All clues are 1 (tallest building first)
test_case "All Clues 1" \
    "1 1 1 1 4 4 4 4 1 1 1 1 4 4 4 4" \
    "4 3 2 1
3 2 1 4
2 1 4 3
1 4 3 2"

# Input validation tests
print_header "INPUT VALIDATION TESTS"

# Test 4: No arguments
test_case "No Arguments" \
    "" \
    "Error"
if [ $# -eq 0 ]; then
    actual_output=$(./rush01 2>&1)
    test_case "No Arguments" "" "$actual_output"
fi

# Test 5: Too many arguments  
test_case "Too Many Arguments" \
    "" \
    "Error"
actual_output=$(./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" "extra" 2>&1)
print_result "Too Many Arguments" "Error" "$actual_output" $([ "$actual_output" = "Error" ] && echo "PASS" || echo "FAIL")

# Test 6: Invalid characters
test_case "Invalid Characters" \
    "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 a" \
    "Error"

# Test 7: Numbers out of range (0)
test_case "Number Out of Range (0)" \
    "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 0" \
    "Error"

# Test 8: Numbers out of range (5)
test_case "Number Out of Range (5)" \
    "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 5" \
    "Error"

# Test 9: Too few arguments
test_case "Too Few Arguments" \
    "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2" \
    "Error"

# Test 10: Too many arguments
test_case "Too Many Arguments in String" \
    "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 3" \
    "Error"

# Test 11: Empty string
test_case "Empty String" \
    "" \
    "Error"

# Test 12: Multiple digits without space
test_case "Multiple Digits No Space" \
    "43 2 1 1 2 2 2 4 3 2 1 1 2 2 2" \
    "Error"

# Edge case tests
print_header "EDGE CASE TESTS"

# Test 13: Impossible puzzle (contradictory clues)
test_case "Impossible Puzzle" \
    "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1" \
    "Error"

# Test 14: Another impossible case
test_case "Impossible Constraints" \
    "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4" \
    "Error"

# Test 15: Extra spaces
test_case "Extra Spaces" \
    "  4  3  2  1  1  2  2  2  4  3  2  1  1  2  2  2  " \
    "1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3"

# Advanced test cases
print_header "ADVANCED TEST CASES"

# Test 16: Different valid solution
test_case "Alternative Valid Case" \
    "2 3 1 4 3 1 4 2 2 4 1 3 3 1 4 2" \
    "Error"
# Note: This might have a solution, let's see what the program outputs
actual_output=$(./rush01 "2 3 1 4 3 1 4 2 2 4 1 3 3 1 4 2" 2>&1)
if validate_grid_format "$actual_output"; then
    print_result "Alternative Valid Case - Format Check" "Valid 4x4 grid" "$actual_output" "PASS"
else
    print_result "Alternative Valid Case - Should be Error or Valid Grid" "Error or valid grid" "$actual_output" $([ "$actual_output" = "Error" ] && echo "PASS" || echo "FAIL")
fi

# Test 17: Tabs instead of spaces
test_case "Tabs Instead of Spaces" \
    $'4\t3\t2\t1\t1\t2\t2\t2\t4\t3\t2\t1\t1\t2\t2\t2' \
    "1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3"

# Memory tests (if valgrind is available)
print_header "MEMORY TESTS"
if command -v valgrind &> /dev/null; then
    echo "Running memory leak test with valgrind..."
    valgrind --leak-check=full --error-exitcode=1 ./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" > /dev/null 2>&1
    if [ $? -eq 0 ]; then
        echo -e "${GREEN}✓ No memory leaks detected${NC}"
        PASSED_TESTS=$((PASSED_TESTS + 1))
    else
        echo -e "${RED}✗ Memory leaks detected${NC}"
        FAILED_TESTS=$((FAILED_TESTS + 1))
    fi
    TOTAL_TESTS=$((TOTAL_TESTS + 1))
else
    echo -e "${YELLOW}⚠ Valgrind not available, skipping memory tests${NC}"
fi

# Performance test
print_header "PERFORMANCE TEST"
echo "Testing performance with difficult case..."
start_time=$(date +%s.%N)
./rush01 "2 1 3 4 3 4 1 2 2 4 1 3 3 1 4 2" > /dev/null 2>&1
end_time=$(date +%s.%N)
execution_time=$(echo "$end_time - $start_time" | bc -l 2>/dev/null || echo "N/A")

if [ "$execution_time" != "N/A" ] && (( $(echo "$execution_time < 5.0" | bc -l) )); then
    echo -e "${GREEN}✓ Performance test passed (${execution_time}s < 5s)${NC}"
else
    echo -e "${YELLOW}⚠ Performance test: ${execution_time}s (consider optimization if > 5s)${NC}"
fi

# Final summary
print_header "TEST SUMMARY"
echo -e "Total tests: $TOTAL_TESTS"
echo -e "${GREEN}Passed: $PASSED_TESTS${NC}"
echo -e "${RED}Failed: $FAILED_TESTS${NC}"

if [ $FAILED_TESTS -eq 0 ]; then
    echo -e "\n${GREEN}🎉 ALL TESTS PASSED! 🎉${NC}"
    exit 0
else
    echo -e "\n${RED}❌ Some tests failed. Please review the code.${NC}"
    exit 1
fi

# Cleanup
rm -f rush01 2>/dev/null