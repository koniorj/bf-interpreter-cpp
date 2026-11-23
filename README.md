# Brainfuck Interpreter

A simple, lightweight Brainfuck interpreter written in modern C++.

## Overview

Brainfuck is an esoteric programming language created in 1993 by Urban Müller, notable for its extreme minimalism. The language consists of only eight simple commands and an instruction pointer.

This project implements a basic interpreter capable of parsing and executing Brainfuck code, built with CMake.

## Project Structure

* `Interpreter.h` / `Interpreter.cpp` – Core logic of the Brainfuck virtual machine (tape memory, pointer management, and execution loop).
* `CMakeLists.txt` – Build configuration.
* `description.md` – Project notes and initial specifications.
