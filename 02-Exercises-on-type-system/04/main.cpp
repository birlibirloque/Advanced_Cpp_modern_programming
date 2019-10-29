#include <iostream>

void f() {
    std::vector<double> v {1.0, 2.0, 3.0};
    std::list<double> w{0.5, 0.5, 0.5};
    auto t = scalar(v,w);
    std::cout << "scalar −> " << t << "\n";
}

int main() {
    f();
    return 0;
}

