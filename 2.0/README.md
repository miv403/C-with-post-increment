# reference types

## pointers

```c++
int * my_ptr;
printf("pointer address: %p", my_ptr);
```
pointer arithmetic and arrays are same as C.

### void pointers

there is no void pointer `void *` in C++. if you need to interact raw
bytes you can use `std::byte` pointer.

### `nullptr` and boolean expressions

if a pointer equals `nullptr` it doesn't point to anything.

pointers can be implicitly converted to `bool` value. any value that is not
`nullptr` converts implicitly to `true`.

## references

You declare references with the `&` declarator appended to the type name. References
cannot be assigned to `null` (easily), and they cannot be reseated (or reassigned).

```c
void add_year(ClockOfTheLongNow& clock) {
    clock.set_year((clock.get_year() + 1)); // no deref operator.
}

int main() {
    ClockOfTheLongNow clock;
    std::cout << "The year is " << clock.get_year();
    add_year(clock);                                // no need to take its address.
    std::cout << "The year is " << clock.get_year();
}
```

references aren't sometimes not suitable. like data structures.

### `this` pointer

`this`: *current object*, the object that is executing the method.

```c
struct Element {
    Element* next{};
    void insert_after(Element* new_element) {
        new_element->next = this->next;
        this->next = new_element;
    }
    char prefix[2];
    short operating_number;
};
```

```c
struct ClockOfTheLongNow {
    bool set_year(int year) {
        if (year < 2019) return false;
        this->year = year;
        v
        return true;
    }
    --snip--
private:
    int year;
};
```

### `const` keyword

#### `const` argument

a `const` argument cannot be changed.

```c
void petruchio(const char* shrewu) {
    printf("Fear not, sweet wench, they shall not touch thee, %s.", shrew);
    shrew[0] = "K";  // Compiler error! The shrew cannot be tamed.
}

```

#### `const` methods

`const` methods can only read the object's members.

```c
struct ClockOfTheLongNow {
  --snip--
  int get_year() const {
    return year;
}
private:
  int year;
};
```

#### `const` member variables

```c
struct About {
  const char* name = "Erasmas";
  ClockOfTheLongNow apert;
}
```

```c
void does_not_compile(const Avout& avout) {
  avout.apert.add_year(); // Compiler error: avout is const
}
```

### member initializer lists

```c
struct Avout {
    Avout(const char* name, long year_of_apert)
        : name{ name }, apert{ year_of_apert } { // member init list
    } //  ^ first       ^ second
    void announce() const {
        printf("My name is %s and my next apert is %d.\n", name, apert.get_year());
    }
    const char* name;
    ClockOfTheLongNow apert;
};
```

> [!NOTE]
> You should order the member initializers in the same order they appear in the
> class definition, because their constructors will be called in this order.

### `auto` type

The auto keyword assists in making code simpler and more resilient to refactoring.

```c
int answer = 42;
```

```c
auto the_answer { 42 };  // int
auto foot { 12L }; // long
auto rootbeer { 5.0F }; // float
auto cheeseburger { 10.0 }; // double
auto politifact_claims { false }  // bool
auto cheese { "string" }; // char[7]
```

could be used with parantheses too

```c
auto the_answer = 42;
auto foot(12L);
--snip--
```


### `auto` reference types

```c
auto year { 2019 }; // int
auto& year_ref = year; // int&
const auto& year_cref = year; // const int&
auto* year_ptr = &year; // int*
const auto* year_cptr = &year; // const int*
```

