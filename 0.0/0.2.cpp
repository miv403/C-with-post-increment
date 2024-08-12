//
// Created by miv403 on 01/08/24.
//

#include <cstdio>
#include <iostream>

struct Hal {
    Hal() : version{9000} { // Constructor u
        printf("I'm completely operational.\n");
    }

    ~Hal()
    { // Destructor v
        printf("Stop, Dave.\n");
    }

    const int version;
};

int main() { //  TODO:: aa
    auto hal = new Hal{}; // similar to malloc()
    std::cout << ":D\n";; // similar to free()
    delete hal;
}
