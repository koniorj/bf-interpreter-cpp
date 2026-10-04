#ifndef BF_INTERPRETER_CPP_INTERPRETER_H
#define BF_INTERPRETER_CPP_INTERPRETER_H

#include <cstdint>
#include <vector>
#include <string>

class Interpreter
{
    size_t array_pointer;
    std::vector<uint8_t> byte_array = std::vector<uint8_t>(30000, 0);
    std::string code;
    size_t code_pointer;

public:
    explicit Interpreter(std::string input_code) :
    code(std::move(input_code)), array_pointer(0) , code_pointer(0) {}

    void run();
};


#endif //BF_INTERPRETER_CPP_INTERPRETER_H