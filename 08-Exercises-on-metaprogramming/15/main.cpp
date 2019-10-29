#include <iostream>

int main() {
    std::vector<int> v{1,2,3,4,5};
    print_ranges(v.begin(), v.end());
    print_ranges(v.begin(), 3);
    print_ranges(v.begin(), "hello"); // Compiler error
    return 0;
}

