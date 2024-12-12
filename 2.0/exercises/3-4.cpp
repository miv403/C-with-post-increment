#include <cstdio>
int main() {
    auto original = 100L;
    auto& original_ref = original;
    printf("Original: %ld\n", original);
    printf("Reference: %ld\n", original_ref);

    auto new_value = 200;
    original_ref = new_value;
    printf("Original: %ld\n", original);
    printf("New Value: %d\n", new_value);
    printf("Reference: %ld\n", original_ref);
}
