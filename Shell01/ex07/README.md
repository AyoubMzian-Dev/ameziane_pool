# Exercise 07: r_dwssap

## Objective

Write a command line that processes the output of `cat /etc/passwd` with the following modifications:

1.  Remove comments.
2.  Keep every other line, starting from the second line.
3.  Reverse each login name.
4.  Sort the results in reverse alphabetical order.
5.  Keep only logins between the environment variables `FT_LINE1` and `FT_LINE2` (inclusive).
6.  Join them in a single line, separated by ", ".
7.  End the output with a "."

## Solution

```sh
#!/bin/sh
cat /etc/passwd | \
grep -v '^#' | \
sed -n '2~2p' | \
cut -d: -f1 | \
rev | \
sort -r | \
sed -n "$FT_LINE1,${FT_LINE2}p" | \
paste -sd ', ' - | \
sed 's/$/./'
```

## Usage

To use the script, set the `FT_LINE1` and `FT_LINE2` environment variables to define the range of lines to process.

```sh
export FT_LINE1=7
export FT_LINE2=15
./r_dwssap.sh
```

```