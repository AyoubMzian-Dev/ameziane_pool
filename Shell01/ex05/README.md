# Exercise 05: Can you create it ?

## Objective

Create a file containing only "42", and nothing else. The file name must be:
`"\?$*'MaRViN'*$?"`

## Solution

This exercise does not require a script. The solution is to create the file with the specified name and content using a shell command.

```sh
echo "42" > "\?$*'MaRViN'*$?"
```

## Verification

You can verify the creation of the file with the following commands:

```sh
# List the file details
ls -lRa *MaRV*

# Display the file content
cat "\?$*'MaRViN'*$?"
```
