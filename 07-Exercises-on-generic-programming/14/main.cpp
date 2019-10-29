#include <iostream>

int main() {
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
    return 0;
}

