Code a function that takes two arbitrary sequence containers and computes its scalar product. The function should diagnose at compile time whether element types of both sequence containers are arithmetic types.

The function must return the result as a scalar value of a type capable of holding a product of
element types.

The function should be used in the following way:


```cpp
void f() {
    std::vector<double> v {1.0, 2.0, 3.0};
    std::list<double> w{0.5, 0.5, 0.5};
    auto t = scalar(v,w);
    std::cout << "scalar −> " << t << "\n";
}
```

