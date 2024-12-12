#include <stdexcept>
#include <iostream>

using namespace std;

class Groucho {
    public:
        void forget(int x) {
            if(x == 0xFACE) {
                throw runtime_error
                            { "I'd be glad to make an exception."};
            }
            cout << "Forgot 0x" << hex << x << endl;
        }
};

int main() {

    Groucho groucho;

    try { 
        groucho.forget(0xC0DE);
        groucho.forget(0xFACE);
        groucho.forget(0xC0FFEE);
    } catch (const std::runtime_error& e) {
            printf("exception caught with message: %s\n"
                                                        , e.what());
    }
    return 0;
}