# Exercise 06: Skip

## Objective

Write a command line that executes `ls -l` but displays only every second line, starting from the first line.

## Solution

```sh
#!/bin/sh
ls -l | sed -n 'p;n'
```

## Usage

To use the script, simply run it from the command line.

```sh
./skip.sh
```
