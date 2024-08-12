#include <iostream>

int main() {

    float a{ 1 };
    float b{ 2 };
    int narrowed_result(a/b);
    int result{ a/b };

    std::cout << "narrowed: " << narrowed_result << "\n";
    std::cout << "result: " << result << "\n"; // compiler warns for narrowing conversion from `float` to `int`
}

/* output
 * narrowed: 0
 * result: 0
 */
