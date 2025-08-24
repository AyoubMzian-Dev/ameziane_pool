# Exercise 01: print_groups

## Objective

Write a command line that displays the list of groups the user (defined in the environment variable `FT_USER`) belongs to. The output should be comma-separated, without spaces.

## Solution

```sh
#!/bin/sh
id -Gn "$FT_USER" | tr ' ' ',' | tr -d '\n'
```

## Usage

To use the script, first set the `FT_USER` environment variable to the desired username, and then run the script.

```sh
export FT_USER=bocal
./print_groups.sh
```

```