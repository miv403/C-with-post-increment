#include <iostream>
#include <cstdio>

struct ClockOfTheLongNow {
    void add_year() {
        year++;
    }
    bool set_year(int new_year) {
        if (new_year < 2024) return false;
        year = new_year;
        return true;
    }
    int get_year() {
        return year;
    }
private: // caller can access to year only with set_year method.
    int year;
};

int main() {

    ClockOfTheLongNow clock;

    if(!clock.set_year(2023)) {
        clock.set_year(2024);
    }
    clock.add_year();
    std::cout << "year: " << clock.get_year() << "\n";

    return 3152;
}
