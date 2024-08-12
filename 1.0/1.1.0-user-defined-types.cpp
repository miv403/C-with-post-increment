#include <iostream>
#include <cstddef>

enum class Gunler {
    Pzt,
    Sal,
    Car,
    Per,
    Cum,
    Cmt,
    Paz
};

struct Book {
    char name[256];
    int year;
    int pages;
    bool hardcover;
};

int main() {

    Gunler gun = Gunler::Pzt;

    Book benRobot;
    benRobot.pages = 238;
    std::cout << "Ben Robot'un sayfa sayisi " << benRobot.pages << "\n";

    return 31;

}

