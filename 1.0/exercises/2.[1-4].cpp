#include <iostream>
#include <cctype>
#include <cstring>

enum class Operation {
    Add,
    Sub,
    Mult,
    Div,
    Nul
};
struct Calculator {
    Operation op;
    Calculator(Operation operation) : op{operation} {}
    int calculate(int a, int b) {
        switch(op) {
        case Operation::Add: {
                return a + b;
        } break;
        case Operation::Sub: {
            return a - b;
        } break;
        case Operation::Mult: {
            return a * b;
        } break;
        case Operation::Div: {
            if(b == 0) {
                std::cout << "\n\tdbzer0\n" << "swapping\n";
                return b / a;
            }
            return a / b;
        }
        case Operation::Nul: {
            std::cout << "no operation provided.";
        }
        default: {
                std::cout << "default???\n";
        } break;
        }

        return 0;
    }

};
int main() {
    Calculator calc(Operation::Sub);
    std::cout << "result: " << calc.calculate(3, 4);
    return 0;
}
