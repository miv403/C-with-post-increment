#include <cstddef>
#include <iostream>

struct Neyms {
    char neym[256];
};

void printNames(Neyms* neym, size_t n) {
    for(size_t i = 0; i < n; ++i) {
        std::cout << neym[i].neym << " neyM\n";
    }
}

int main() {
    Neyms arr[] = {"aaa", "bbb", "ccc"};
    printNames(arr, sizeof(arr) / sizeof(Neyms));
}

void func() {



}

