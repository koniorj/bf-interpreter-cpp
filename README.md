# Brainfuck Interpreter

A simple, lightweight Brainfuck interpreter written in modern C++.

## Overview

Brainfuck is an extremely tiny, esoteric programming language, created in 1993 by Urban Müller.
It uses only eight symbols to do math and change data, and despite that - it is Turing-complete.

```cpp
> Move the Pointer to the right
< Move the Pointer to the left
+ Increment the current cell
- Decrement the current cell
. Output the character signified by the current cell
, Input a character and store it in the current cell
[ Jump to the matching `]` if the current value is 0
] Jump to the matching `[` if the current value is nonzero
```

## Project Structure

* `Interpreter.h` / `Interpreter.cpp` – Core logic of the Brainfuck virtual machine (tape memory, pointer management, and execution loop).
* `CMakeLists.txt` – Build configuration.
* `description.md` – Project notes and initial specifications.
