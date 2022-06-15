# 0x16. C - Simple Shell
## About
The shell is the Linux command line interpreter. It provides an interface between the user and the kernel and executes programs called commands. For example, if a user enters `ls` then the shell executes the `ls` command.

This project, `simple_shell`, is a custom implementation of a simple UNIX shell as a requirement to complete the first sprint in the ALX - Holberton school 12-month SE program. Taking a minimalistic approach, the following functions have been implemented: `access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.`

## Table of Contents
* [About](#About)
* [File Descriptions](#File-Descriptions)
* [Requirements](#Requirements)
* [More Info and Examples](#More-Info-and-Examples)
	* [Installation](#Installation)
	* [Examples](#Examples)
* [Mandatory Tasks](#Mandatory-Tasks)
* [Advanced Tasks](#Advanced-Tasks)
* [Bugs](#Bugs)
* [Authors](Authors)
* [License](#License)


## Requirements
### General
 - Allowed editors: vi, vim, emacs
 - All files were compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
 - Betty coding style is followed.
 - The simple shell has no known memory leaks

## More Info and Examples


### Examples
Example of error with sh:
```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```
Same error with our program hsh:
```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

## Bugs
No known bugs exists within the program as of this writing.

## Authors
Ottobong Christopher <christopherottobong@gmail.com>
Stephanie Khasoha <khasohastephanie@gmail.com>

## License
Given the open source nature of the project, no special licenses or license whatsoever is needed to use, modify, and redistribute the simple_shell program.
