#include <iostream>

#define NOW 2024

using namespace std;
/*
 * target heart reate
 *
 * max bpm = 220 - age
 * 50-85% is range
 *
 */

class HeartRates {

public:
    HeartRates(const string& stname,
               const string& lname,
               const int& y)
        : firstName{stname}, lastName{lname}, year{y} {
        age = getAge(y);

    }
    void printAttr() {
        cout << "first name: " << this->firstName << endl;
        cout << "last name: " << this->lastName << endl;
        cout << "target heart rate: " << this->getTargetHeartRate() << endl;
    }
private:
    int getAge(const int& y) {
        if (y < NOW) {
            return NOW - y;
        } else {
            cout << "non-valid age." << endl;
            return -1;
        }
    }
    int getMaximumHeartRate() {
        return 220 - age;
    }
    int getTargetHeartRate() {
        int max = getMaximumHeartRate();
        return max * 0.5;
    }
    string firstName;
    string lastName;
    int year;
    int age;
};

int main() {

    HeartRates user{"mehmet", "var", 2004};

    user.printAttr();
}
