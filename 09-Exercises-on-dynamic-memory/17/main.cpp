#include <iostream>

int main() {
    filter_printer<double> p;
    p.add_value(1.0);
    p.add_value(−1.0);
    p.add_value(2.0);
    p.add_value(−3.0);
    p.register_filter([](double x) { return x>0.0; });
    std::cout << "Printing filtered data\n";
    p.invoke();
    p.remove_filter();
    std::cout << "\n\nPrinting all data\n";
    p.invoke();
    return 0;
}

