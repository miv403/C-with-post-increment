#include <iostream>

struct neym {
    char name[256];
};

void printName(neym* pNeym) {
    std::cout << pNeym->name << " neym\n";
}

int main() {

    int arrrr[] {3,1,6,9};
    int* pArrrr = arrrr;

    neym bestneyms[] = {"abc", "def", "ghi"};
    printName(bestneyms);
    return 0;
}
