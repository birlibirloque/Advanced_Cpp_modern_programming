#include <iostream>

template <typename T>
class fixed_vector {
public:
    explicit dyn_vector(int n);
    T & operator[](int i);
    T const & operator[](int i) const;

private:
    int size_;
    T ∗ vec_;
};

int main() {
    std::cout << "Testing dyn_vector\n";
    dyn_vector<double> v(5);
    v[2] = 3.0;
    for (auto & x : v) {
        x++;
    }
    for (const auto & x : v) {
        std::cout << x << ", ";
    }
    return 0;
}

