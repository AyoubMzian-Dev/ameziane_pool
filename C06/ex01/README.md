# Exercise 01: ft_print_params

**Program:** `ft_print_params`

**Description:** Write a program that displays its given arguments. Each argument should be printed on a new line, in the same order as in the command line. The program should display all arguments except `argv[0]`.

**Allowed functions:** `write`

**Key Points:**
- The program must have a `main` function.
- The arguments are stored in `argv`, starting from `argv[1]`.
- `argc` is the number of arguments, including the program name.
- We loop from 1 to `argc - 1` to print each argument.
