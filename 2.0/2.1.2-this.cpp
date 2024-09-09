
struct Element {
    Element* next{};
    void insert_after(Element* new_element) {
        new_element->next = this->next;
        this->next = new_element;
    }
    char prefix[2];
    short operating_number;
};
