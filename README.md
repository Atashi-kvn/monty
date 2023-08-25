# 0x19. C - Stacks, Queues - LIFO, FIFO

## Overview
This repository contains the code for the project "0x19. C - Stacks, Queues - LIFO, FIFO" from Holberton School's low-level programming track. The project involves creating an interpreter for Monty ByteCodes files using the C programming language.

## The Monty Language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes, similar to Python. It operates on a unique stack and provides specific instructions to manipulate it.

## Monty Byte Code Files
Monty byte code files are text files that typically have the `.m` extension. Although it's an industry standard, the specification of the language does not require this extension. Each line of the file contains a single instruction. The opcode (instruction) and its argument, if any, are separated by one or more spaces. Leading and trailing spaces around the opcode and its argument are ignored.


## Compilation
To compile the Monty interpreter, navigate to the project directory and run the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

This command compiles all the necessary source files and produces an executable named `monty`.

## Usage
After successfully compiling the Monty interpreter, you can run it with the following command:

```
./monty <file_name>
```

Replace `<file_name>` with the path to the Monty byte code file you wish to interpret. The interpreter will read the byte code file, execute the instructions, and display the output accordingly.

## Example
Here is an example of running the Monty interpreter:

```
./monty bytecode/bytecodes_001.m
```

## Testing
To ensure the correctness of the Monty interpreter, a set of tests has been provided. We strongly encourage you to work together on creating additional tests to cover different scenarios and edge cases. The `bytecode` directory contains example byte code files that you can use for testing. Feel free to modify and create new files as needed.

## Resources
- [Monty Language Documentation](https://montyscript.org/)
- [Monty Byte Code Files Specification](https://montyscript.org/Monty-byte-code-files)

## Authors
- [Atandi Kelvin](https://github.com/Atashi_kvn)


