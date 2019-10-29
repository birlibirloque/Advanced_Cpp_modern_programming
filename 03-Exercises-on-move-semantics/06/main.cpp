#include <iostream>

template <typename T>
void print(const std::string & name, const fixed_array<T> & a) {
    std::cout << name << "\n";
    std::cout << a << "\n";
};

int main() {
    fixed_array<double>
    print("v1", v1);

    fixed_array<double>
    print("v2", v2);

    fixed_array<double>
    print("v3", v3);

    fixed_array<double>
    print("v3", v3);
    print("v4", v4);
    v4 = v2;
    print("v2", v2);
    print("v4", v4);

    fixed_array<double>
    print("v4", v4);
    print("v5", v5);
    v1 = std::move(v5);
    print("v1", v1);
    print("v5", v5);
    
    return 0;
}
