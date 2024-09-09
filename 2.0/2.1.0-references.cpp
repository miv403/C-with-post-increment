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

void add_year(ClockOfTheLongNow& clock) {
    clock.set_year((clock.get_year() + 1)); // no deref operator.
}

int main() {
    ClockOfTheLongNow clock{2024};
    std::cout << "The year is " << clock.get_year() << "\n";
    add_year(clock);                                // no need to take its address.
    std::cout << "The year is " << clock.get_year();
}

