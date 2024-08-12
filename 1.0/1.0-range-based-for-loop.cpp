#include <iostream>
#include <cstddef>

int main() {
    int values[] = {1, 2, 3, 31};

    for (int value : values) // we don't need to use any index number
    {
        std::cout << "value: " << value << "\n";
    }

    for (size_t i = 0; i < 4; ++i)
    {
        std::cout << "value: " << values[i] << "\n";
    }
}
