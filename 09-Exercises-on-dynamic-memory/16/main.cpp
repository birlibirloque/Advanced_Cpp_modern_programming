#include <iostream>

int main() {
    auto p1 = get_unique_str("");
    if (p1) {
        std::cout << ∗p1 << "\n";
    }
    else {
        std::cout << "nullptr\n";
    }
    auto p2 = get_unique_str("Hello");
    if (p2) {
        std::cout << ∗p2 << "\n";
    }
    else {
        std::cout << "nullptr\n";
    }
    return 0;
}

