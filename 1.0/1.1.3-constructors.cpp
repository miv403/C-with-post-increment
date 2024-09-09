#include <iostream>

struct ClockOfTheLongNow {
    ClockOfTheLongNow(int year_in) {
        if(!set_year(year_in)) {
            year = 2024;
        }
    }
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

    // ClockOfTheLongNow clock; // we need arguments so ...
    ClockOfTheLongNow clock{ 2025 };
    std::cout << "Default year: " << clock.get_year() << "\n";
    return 0;
}
