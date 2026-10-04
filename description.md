Brainfuck is an extremely tiny, esoteric programming language.
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