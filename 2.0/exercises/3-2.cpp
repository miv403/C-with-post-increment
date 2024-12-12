/*
 * listing 3-6

#include <cstdio>
int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = upper; // Equivalent: &upper[0]
    lower[3] = 'd'; // lower now contains a b c d e \0
    upper_ptr[3] = 'D'; // upper now contains A B C D E \0

    char letter_d = lower[3]; // letter_d equals 'd'
    char letter_D = upper_ptr[3]; // letter_D equals 'D'
    printf("lower: %s\nupper: %s", lower, upper);
    lower[7] = 'g';
}
 */

#include <iostream>

struct read_write {
    read_write(char* str, size_t size) {
        this->str = str;
        this->size = size;
    }
    char read_from(size_t index) {
        return size > index ? this->str[index] : '\0';
    }
    bool write_to(size_t index, char ch) {
        if (size - 1 > index) {
            this->str[index] = ch;
            return true;
        }
        else {
            return false;
        }
    }
private:
    char * str;
    size_t size;

};

int main() {
    char lower_s[] = "abc?e";
    char upper_s[] = "ABC?E";

    read_write lower{lower_s, sizeof(lower_s) / sizeof(char)};
    std::cout << "lower 4: " <<lower.read_from(3) << "\n";

    if (lower.write_to(8, 'd'))
        std::cout << "lower 4: " << lower.read_from(3) << "\n";
    else
        std::cout << "failed to write_to lower 4\n";
}
