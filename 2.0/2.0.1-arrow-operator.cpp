#include <iostream>

struct ClockOfTheLongNow {
    ClockOfTheLongNow() {
        year = 2024;
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

    ClockOfTheLongNow clock;
    ClockOfTheLongNow* pClock = &clock;
    pClock->set_year(2025);
    std::cout << "pClock: " << pClock << "\n";
    std::cout << "clock: " <<clock.get_year() << "\n";
}
