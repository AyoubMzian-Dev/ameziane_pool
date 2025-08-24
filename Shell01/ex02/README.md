# Exercise 02: find_sh

## Objective

Write a command line that searches for all files ending with `.sh` in the current directory and all subdirectories. The output should display only the file names without the `.sh` extension.

## Solution

```sh
#!/bin/sh
find . -type f -name "*.sh" -exec basename -s .sh {} +
```

## Usage

To use the script, simply run it from the command line.

```sh
./find_sh.sh
```
