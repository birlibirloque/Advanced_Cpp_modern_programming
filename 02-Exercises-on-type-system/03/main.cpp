#include <iostream>

void f() {
    auto x1 = add(1, 2); // OK
    auto x2 = add(1, 1.5); // OK
    auto x3 = add(1, "hello"); // Error
}

int main() {
    f();
    return 0;
}

