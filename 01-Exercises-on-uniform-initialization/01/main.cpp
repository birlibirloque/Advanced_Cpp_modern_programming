#include <iostream>

template <typename T, int N>
void print(const fixed_vector<T,N> & v) {
    for (auto const & x: v) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

int main() {
    fixed_vector<double,3> v;
    print(v);
    fixed_vector<int,4> w{1,2,3,4};
    print(w);
}
