#include <iostream>

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
    return 0;
}

