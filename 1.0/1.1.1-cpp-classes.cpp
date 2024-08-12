#include <cstdio>
#include <iostream>


struct ClockOfTheLongNow {
    void add_year() {
        year++;
    }
    int year;
};

int main() {

    ClockOfTheLongNow clock;
    clock.year = 2031;
    clock.add_year();

    std::cout << "year: " << clock.year << "\n";
    clock.add_year();
    std::cout << "year: " << clock.year << "\n";

    return 31;

}
