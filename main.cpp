#include "Interpreter.h"
#include <iostream>

int main()
{
    // "A"
    Interpreter interpreter0{"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++."};

    // "Well hello!"
    Interpreter interpreter1{"+[--->++<]>+.++[->++++<]>+.+++++++..[++>---<]>--.-[--->++<]>--.---.+++++++..+++.[--->+<]>----."};

    // "Brainfuck"
    Interpreter interpreter2{"++++[++++>---<]>-.---[----->+<]>-.+++[->+++<]>++.++++++++.+++++.--------.-[--->+<]>--.+[->+++<]>+.++++++++."};

    interpreter0.run();
    std::cout << "\n";
    interpreter1.run();
    std::cout << "\n";
    interpreter2.run();

    return 0;
}