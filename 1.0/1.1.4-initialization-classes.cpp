//
// Created by miv403 on 11/08/24.
//

#include <cstdio>

struct Taxonomist {
    Taxonomist() {
        printf("(no argument)\n");
    }
    Taxonomist(char x) {
        printf("char: %c\n", x);
    }
    Taxonomist(int x) {
        printf("int : %d\n", x);
    }
    Taxonomist(float x) {
        printf("float: %f\n", x);
    }
};

int main() {
    Taxonomist t1;
    Taxonomist t2{ 'c'};
    Taxonomist t3 {65537};
    Taxonomist t4 {6.02e23f};
    Taxonomist t5 { 'g' };
    Taxonomist t6 = { '1'};
    Taxonomist t7{};
    Taxonomist t8(); // no output
    /*
    * If you squint a little bit, this initialization `t8` looks like a function dec-
    * laration, and that’s because it is. Because of some arcane language-parsing
    * rules, what you’ve declared to the compiler is that a yet-to-be-defined func-
    * tion t8 takes no arguments and returns an object of type Taxonomist. Ouch.
    */
}
