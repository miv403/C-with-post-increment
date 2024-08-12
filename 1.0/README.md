# for now the title is `1.0`

## user-defined types

### enumeration

```C <!--++-->

enum class Gunler {
  Pzt,
  Sal,
  Car,
  Per,
  Cum,
  Cmt,
  Paz
};
```

### Plain-Old-Data classes

```C <!--++-->

struct Book {
  char name[256];
  int year;
  int pages;
  bool hardcover;
};
```

> [!NOTE] Note
> PODs have some useful low-level features: they’re C compatible,
> you can employ machine instructions that are highly efficient to
> copy or move them, and they can be efficiently represented in memory.
> C++ guarantees that members will be sequential in memory, although some
> implementations require members to be aligned along word boundaries,
> which depend on CPU register length. As a general rule, you should order
> members from largest to smallest within POD definitions.

## fully featured C++ classes

### methods

**methods** are member functions.

```C <!--++-->
struct ClockOfTheLongNow {

  void add_year() {
    year++;
  }
  int year;
};

```
### access controls

```C <!--++-->
  struct ClockOfTheLongNow {
void add_year() {
    year++;
  }
  bool set_year(int new_year) {
    if (new_year < 2019) return false;
      year = new_year;
      return true;
  }
  int get_year() {
    return year;
  }
  private:
    int year;
};
```

you can use `class` keyword instead `struct`. only difference between
`struct` and `class` is default access control.

### constructors

constructors are special methods with special declarations.
constructor declarations don't state a return type and their name matches the class's name.

```C <!--++-->

struct ClockOfTheLongNow {
  ClockOfTheLongNow() {
    year = 2019;
  }
  // -- snip --
};
```
### initializing

```C++
int a = 0;      // initialized to 0 with using literal
int b{};        // initialized to 0 with using braces
int c = {};     // initialized to 0 with equals-plus-braces
int d;          // initialized to 0 (maybe)
```

> [!NOTE] Note
> braced initialization is always applicable

#### initializing with arbitrary value

```C++
int e = 42;         // Initialized to 42
int f{ 42 };        // Initialized to 42
int g = { 42 };     // Initialized to 42
int h(42);          // Initialized to 42
```

all of these produce identical code.

#### PODs

```C++
#include <cstdint>
struct PodStruct {
uint64_t a;
char b[256];
bool c;
};
int main() {
PodStruct initialized_pod1{};       // All fields zeroed
PodStruct initialized_pod2 = {};    // All fields zeroed

PodStruct initialized_pod3{ 42, "Hello" };      // Fields a & b set; c = 0
PodStruct initialized_pod4{ 42, "Hello", true };// All fields set
}
```
> [!WARNING]
> You cannot use the equals-zero approach with PODs.
> The following will not compile
> because it’s expressly forbidden in the language rules:
> 
> `PodStruct initialized_pod = 0;`

> [!WARNING]
> You cannot use parentheses to initialize PODs.
> The following will not compile:
>
> `PodStruct initialized_pod(42, "Hello", true);`

#### arrays

```c++
int main() {
    int array_1[]{1, 2, 3};
    int array_2[5]{}; // {0, 0, 0, 0, 0}
    int array_3[5]{1,2,3}; // len 5 & {1, 2, 3, 0, 0}
    int array_4[5]; // uninitialized values
}
```

#### fully featured classes

```c++
#include <cstdio>

struct Taxonomist {
    Taxonomist() {
        printf("(no argument)\n");
    }
    Taxonomist(char x) {
        printf("char: %c\n", x);
    }
    Taxonomist(int x) {
        printf("int : %d\n", x);
    }
    Taxonomist(float x) {
        printf("float: %f\n", x);
    }
};
```

#### narrowing conversions

```c++
float a{ 1 };
float b{ 2 };
int narrowed_result(a/b);
int result{ a/b };
```

```commandline
output
narrowed: 0
result: 0
```

#### Initializing Class Members

```c++
struct BookRegister {
    bool status = true;
    int year{1960};
    char name[10] = {"kitaptir."};
};
```

it's not possible to use parentheses to initialize member variables.

> [!NOTE] use braces
> 
> use braced initializers everywhere.
>
> there are some exceptions, ofcourse.

### the destructor

*destructor* is an object's cleanup function.
the destructor invoked before an object is destroyed.

Defining a destructor is optional. If you do decide to implement a
destructor, it must not take any arguments. Examples of actions you might
want to take in a destructor include releasing file handles, flushing network
sockets, and freeing dynamic objects.

If you don’t define a destructor, a default destructor is automatically
generated. The default destructor’s behavior is to perform no action.

```c++
struct Earth {
    ~Earth() { // Earth's destructor
        std::cout << "bye!\n";
};
```
