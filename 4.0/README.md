# Runtime Polymorphism

## Polymorphism

*Polymorphic code* is code you write once and can reuse with different types.
Ultimately, this flexibility yields loosely coupled and highly reusable code. It
eliminates tedious copying and pasting, making your code more maintain­able and readable.

## base class inheritance

```c++
struct DerivedClass : BaseClass {
--snip--
};
```

*The benefit is that you can treat derived class references as if they were of base class refer­ence type.*

```c++
struct BaseClass {};
struct DerivedClass : BaseClass {};
void are_belong_to_us(BaseClass& base) {}
int main() {
    DerivedClass derived;
    are_belong_to_us(derived);
}
```

## `virtual` keyword

If you want to permit a derived class to override a base class’s methods, you
use the `virtual` keyword. By adding `virtual` to a method’s definition, you
declare that a derived class’s implementation should be used if one is
sup­plied. Within the implementation, you add the `override` keyword to the
method’s declaration, as demonstrated in Listing 5-7.
