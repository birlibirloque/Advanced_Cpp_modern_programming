Define a type length to represent length measurements. Literals from this type should support
suffixes _m (for meters) and _km (for kilometres).

Besides, define a type duration to represent time measurements. Literals from this type should
support suffixes _h (hours), _min (minutes) and _sec (for seconds).

Additionally, define a type speed, so that it is possible to write:


```cpp
auto x1 = 100_m;
auto x2 = 2_km;
auto x3 = x1+x2;
std::cout << x3 << "\n";
auto d1 = 1_min;
auto d2 = 1_h + 1_min + 1_s;
auto d3 = d1+d2;
std::cout << d3 << "\n";
auto v = x3/d3;
std::cout << v << "\n";
```

