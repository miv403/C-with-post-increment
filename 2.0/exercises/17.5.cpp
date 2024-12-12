#include <iostream>

using namespace std;

class Complex {
public:
    Complex(const double& real, const double& img)
        : real{real}, img {img} {
    }
    Complex() {
        setReal(0);
        setImg(0);
    }
    Complex* add(const Complex& c) const {
        Complex* n =  new Complex{};
        n->setReal(this->getReal() + c.getReal());
        n->setImg(this->getReal() + c.getImg());
        return n;
    }
    double getReal() const {
        return this->real;
    }
    double getImg() const {
        return this->img;
    }
    void setReal(const double& r) {
        if ( r >= 0)
            real = r;
        else
            real = -r;
    }
    void setImg(const double& i) {
        if ( i >= 0)
            img = i;
        else
            img = -i;
    }
private:
    double real;
    double img;
};

int main() {
    Complex num1{1, 2};
    Complex num2(2, 3);
    Complex* sum = num1.add(num2);
    cout << "sum " << endl;
    cout << "real: " << sum->getReal() << endl;
    cout << "img: " << sum->getImg() << endl;

//    cout << "sum: " << endl;
//    cout << "real: " << (num1.add(num2))->getReal() << endl;
//    cout << "img: " << (num1.add(num2))->getImg() << endl;
    return 0;
}
