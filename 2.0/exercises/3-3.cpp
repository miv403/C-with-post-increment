#include <cstdio>

struct Element {
    Element* prev{};
    Element* next{};
    void insert_after(Element* new_element) {
        new_element->next = this->next;
        new_element->prev = this;
        this->next = new_element;
    }
    void insert_before(Element* new_element) {
        new_element->next = this;
        new_element->prev = this->prev;
        (new_element->prev)->next = new_element;
        this->prev = new_element;
    }
    char prefix[2];
    short operating_number;
};

int main() {
    Element trooper1, trooper2, trooper3;

    trooper1.prefix[0] = 'T';
    trooper1.prefix[1] = 'K';
    trooper1.operating_number = 421;
    trooper1.insert_after(&trooper2);

    trooper2.prefix[0] = 'F';
    trooper2.prefix[1] = 'N';
    trooper2.operating_number = 2187;
    trooper2.insert_before(&trooper3);

    trooper3.prefix[0] = 'L';
    trooper3.prefix[1] = 'S';
    trooper3.operating_number = 005;

    for (Element *cursor = &trooper1; cursor; cursor = cursor->next) {
        printf("stormtrooper %c%c-%d\n",
               cursor->prefix[0],
               cursor->prefix[1],
               cursor->operating_number);
    }
    puts("");
    for (Element *cursor = &trooper2; cursor; cursor = cursor->prev) {
        printf("stormtrooper %c%c-%d\n",
               cursor->prefix[0],
               cursor->prefix[1],
               cursor->operating_number);
    }
}
