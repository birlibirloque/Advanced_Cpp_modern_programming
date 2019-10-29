Write a function meter that takes any entity that can be invoked (taking any number of arguments), as well as the concrete arguments and executes the call.

It should return a tuple with the result of the function and the time that has taken to execute it (in microseconds).

For example, the function should work with the following code:

```cpp
void g1(double lower, double upper) {
    std::random_device rd;
    std::uniform_real_distribution<> gen{lower, upper};
    double s = 0;
    constexpr long max = 1’000’000;
    for (long i=0; i<max; ++i) {
        s += gen(rd);
    }
    std::cout << "average = " << s/max << "\n";
}

int main() {
    auto d = meter(g1,100.0, 200.0);
    std::cout << "Ellapsed time: " << d.count() << " microseconds";
}
```