# super C

## function overloading

function names can be same in C++

these functions are from the *std C lib*. they achieve the same goal.

```C
char* itoa(int value, char* str, int base);
char* ltoa(long value, char* buffer, int base);
char* ultoa(unsigned long value, char* buffer, int base);
```

but in C++ they can share same name as long as their argument differ; this is called **function overloading**.

```C++
char* toa(int value, char* buffer, int base) {
}
char* toa(long value, char* buffer, int base) {
}
char* toa(unsigned long value, char* buffer, int base) {
}

int main() {
  char buff[10];
  int a = 1; u
  long b = 2; v
  unsigned long c = 3; w
  toa(a, buff, 10);
  toa(b, buff, 10);
  toa(c, buff, 10);
}
```

## references

references are similar to pointers. the differences are;

1. they are be declared with `&` rather than `*`
2. members are be interacted with dot operator `.` rather than the arrow operator `->`

```C
struct HolmesIV {
  bool is_sentient;
  int sense_of_humor_rating;
};
void mannie_service(HolmesIV*); // Takes a pointer to a HolmesIV
void mannie_service(HolmesIV&); // Takes a reference to a HolmesIV
```

```C
void make_sentient(HolmesIV* mike) {
  mike->is_sentient = true;
}
void make_sentient(HolmesIV& mike) {
  mike.is_sentient = true;
}
```

## try-catch

```C
try {
    // some code
} catch (const std::exception &e) {
    // recover program
}
```

## notes

integer literals can contain single quotes for readability.

```C++
int number = 1000000;
int number = 1'000'000;
```

### debugging

debugging with `gdb`

```console
g++ 0.0/0.2.cpp -o hal -g
```
