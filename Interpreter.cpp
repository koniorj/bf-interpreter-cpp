#include "Interpreter.h"
#include <iostream>
#include <stdexcept>

void Interpreter::run()
{
    while (code_pointer < code.size())
    {
        switch (char command = code[code_pointer])
        {
        case '>':
            if (array_pointer+1 < byte_array.size())
            {
                ++array_pointer;
            } else
            {
                throw std::out_of_range("Cannot execute '>', pointer is out of range.");
            }
            break;
        case '<':
            if (array_pointer > 0)
            {
                --array_pointer;
            } else
            {
                throw std::out_of_range("Cannot execute '<', pointer is out of range.");
            }
            break;
        case '+':
            ++byte_array[array_pointer];
            break;
        case '-':
            --byte_array[array_pointer];
            break;
        case '.':
            std::cout << static_cast<char>(byte_array[array_pointer]);
            break;
        case ',':
            {
                if (int input = std::cin.get(); input != EOF) {
                    byte_array[array_pointer] = static_cast<uint8_t>(input);
                }
                break;
            }
        case '[':
            if (byte_array[array_pointer] == 0)
            {
                int loop = 1;
                while (loop != 0)
                {
                    command = code[++code_pointer];
                    if (code_pointer >= code.size())
                    {
                        throw std::runtime_error("Unmatched '['");
                    }
                    if (command == '[')
                    {
                        ++loop;
                    }
                    else if (command == ']')
                    {
                        --loop;
                    }
                }
            }
            break;
        case ']':
            if (byte_array[array_pointer] != 0)
            {
                int loop = 1;
                while (loop != 0)
                {
                    command = code[--code_pointer];
                    if (code_pointer < 0)
                    {
                        throw std::runtime_error("Unmatched '['");
                    }
                    if (command == ']')
                    {
                        ++loop;
                    }
                    else if (command == '[')
                    {
                        --loop;
                    }
                }
            }
            break;
        default:
            break;
        }
        ++code_pointer;
    }
}