# Exercise 03: count_files

## Objective

Write a command line that counts and displays the total number of regular files and directories in the current directory and all its subdirectories.

## Solution

```sh
#!/bin/sh
find . -type f -o -type d | wc -l | tr -d ' '
```

## Usage

To use the script, simply run it from the command line.

```sh
./count_files.sh
```
