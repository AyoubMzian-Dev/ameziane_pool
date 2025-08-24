# Exercise 04: MAC

## Objective

Write a command line that displays your machine’s MAC addresses, with each address followed by a line break.

## Solution

```sh
#!/bin/sh
ifconfig -a | grep ether | egrep -io '([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}'
```

## Usage

To use the script, simply run it from the command line.

```sh
./MAC.sh
```
