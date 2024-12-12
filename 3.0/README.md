# object life cycle

## static storage duration

A *static object* is declared using the `static` or `extern` keyword. You declare
static variables at the same level you declare functions—at global scope (or
*namespace scope*). Static objects with global scope have *static storage duration*
and are allocated when the program starts and deallocated when the program stops.

### external linkage

When you use the `static` keyword, you specify *internal linkage*.
Internal linkage means that a variable is inaccessible to other
translation units[^1]. You can alternately specify *external linkage*, which
makes a variable accessible to other translation units. For external
linkage, you use the `extern` keyword instead of `static`.

```C++
#include <cstdio>
extern int rat_things_power = 200; // External linkage
--snip--
```

### static members

Static members are members of a class that aren’t associated with a
particular instance of the class. Instances have lifetimes but static
members have static storage duration. They are like global static
variables or functions. But we can only access them with scope resolution
operator `::` In fact, you must initialize static members at global
scope. You cannot initialize a static member within a containing class
definition.

> [!NOTE]
> There is an exception to the static member initialization rule: you can
> declare and define integral types within a class definition as long as
> they’re also const.

## constructors

in `3.3.1`: order of constructor is `string`, `a`, `b`.
order of destructor is `b` , `a`, `string`

> [!NOTE]
> *resource acquisition is initialization (RAII)* or
> *constructor acquires, destructor releases (CADRe)*.

## copy semantics

Best practice dictates that you explicitly declare that
`default` copy assignment and copy construction are
acceptable for such classes using the `default` keyword.
The *Replicant* class, for example, has `default` copy
semantics, as demonstrated here:

```c++
struct Replicant {
    Replicant(const Replicant&) = default;
    Replicant& operator=(const Replicant&) = default;
    --snip--
}
```

Some classes simply cannot or should not be copied—for
example, if your class manages a file or if it represents
a mutual exclusion lock for concurrent programming. You
can suppress the compiler from generating a copy
constructor and a copy assignment operator using the
`delete` keyword. The `Highlander` class, for example, cannot
be copied:

```c++
struct Highlander {
    Highlander(const Highlander&) = delete;
    Highlander& operator=(const Highlander&) = delete;
--snip--
};
```

> [!IMPORTANT]
> Any attempt to copy a Highlander will result in a compiler error:

```c++
--snip--
int main() {
    Highlander a;
    Highlander b{ a }; // Bang! There can be only one.
}
```

[^1]: A translation unit roughly consists of a source file after it has been processed by the C preprocessor, meaning that header files listed in #include directives are literally included, sections of code within #ifndef may be included, and macros have been expanded. [wikipedia](https://en.wikipedia.org/wiki/Translation_unit_%28programming%29)
