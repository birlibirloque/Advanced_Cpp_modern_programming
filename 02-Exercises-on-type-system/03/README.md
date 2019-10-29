Code a function that adds two values of arbitrary types and emits a compile error if any of the
types is not an arithmetic type.

The function must be usable in contexts as the following:


```cpp
void f() {
    auto x1 = add(1, 2); // OK
    auto x2 = add(1, 1.5); // OK
    auto x3 = add(1, "hello"); // Error
}
```

