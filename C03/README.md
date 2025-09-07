# C03 - String Functions

## 📋 Module Overview

This module focuses on implementing fundamental string manipulation functions. You'll learn to work with string comparison, concatenation, and searching algorithms.

## 🎯 Learning Objectives

- Master string comparison algorithms
- Understand string concatenation techniques
- Learn substring searching algorithms
- Practice safe string operations
- Handle edge cases and buffer management

## 📚 Exercises

### **All Exercises (0-5)**
- **ex00**: `ft_strcmp` - String comparison
- **ex01**: `ft_strncmp` - Limited string comparison
- **ex02**: `ft_strcat` - String concatenation
- **ex03**: `ft_strncat` - Limited string concatenation
- **ex04**: `ft_strstr` - Substring search
- **ex05**: `ft_strlcat` - Safe string concatenation

## 🔧 Key Concepts

### **Comparison Functions**
- **Lexicographic ordering** - Dictionary-style comparison
- **ASCII value differences** - Return `s1[i] - s2[i]`
- **Boundary conditions** - Handle null terminators properly

### **Concatenation Functions**
- **Buffer management** - Find end of destination string
- **Memory safety** - Understand buffer overflow risks
- **Null termination** - Always properly terminate strings

### **Search Functions**
- **Pattern matching** - Find substrings within strings
- **Nested loop logic** - Position tracking and backtracking
- **Edge cases** - Empty patterns and no matches

### **Safe Functions**
- **Bounds checking** - Prevent buffer overflows
- **Size parameters** - Work within specified limits
- **Return value semantics** - Indicate success/failure/truncation

## 📊 Difficulty Progression

```
Basic     →    Standard    →    Advanced    →    Expert
ex00-01        ex02-03        ex04           ex05
```

## 🚨 Important Notes

- **No allowed functions** - Implement everything from scratch
- **Handle edge cases** - Empty strings, null pointers, size 0
- **Buffer safety** - Understand when functions are safe vs unsafe
- **Return values** - Follow exact standard library behavior

## 💡 Key Patterns

### **String Length Finding**
```c
while (str[len] != '\0')
    len++;
```

### **Character-by-Character Copying**
```c
while (src[j] != '\0')
{
    dest[i + j] = src[j];
    j++;
}
```

### **Pattern Matching**
```c
while (str[i + j] == to_find[j] && both_not_null)
    j++;
if (to_find[j] == '\0')  // Complete match
```

## 🔍 Testing Tips

1. **Test edge cases**: Empty strings, identical strings
2. **Buffer boundaries**: Ensure no overflow in concatenation
3. **Return values**: Verify correct comparison results
4. **Null termination**: Always check proper string ending
5. **Size limits**: Test boundary conditions for limited functions

---

**Status**: Complete with full documentation ✅  
**Total Exercises**: 6 (ex00-ex05)  
**Estimated Time**: 1-2 days  
**Focus**: String algorithms and memory safety