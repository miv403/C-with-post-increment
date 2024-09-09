#include <iostream>

int main() {

    int sayi0{};
    std::cout << "sayi: " << sayi0 << "\n";
    int* pSayi0 = &sayi0;
    std::cout << "&sayi: " << pSayi0 << "\n";

    std::cout << *pSayi0;

    *pSayi0 = 65'536;
    std::cout << *pSayi0;
}

/* output
*  sayi: 0
*  &sayi: 0xcf051ff8c4
*/

