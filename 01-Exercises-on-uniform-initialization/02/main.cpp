#include <iostream>

template <typename T, int R, int C>
void print(const fixed_matrix<T,R,C> & m) {
    for (int i=0;i<R;++i) {
        for (int j=0;j<C;++j) {
            std::cout << m(i,j) << " ";
        }
        std::cout << "\n";
    }
}

void test1() {
    fixed_matrix<double,3,4> a{{1,1,2}, {2,2,2} };
    std::cout << "matrix 1\n";
    print(a);
    std::cout << std::endl;
}

void test2() {
    fixed_matrix<double,3,4> a{{1,1,2}, {2,2,2}, {1}, };
    std::cout << "matrix 2\n";
    print(a);
    std::cout << std::endl;
}

void test3() {
    try {
        fixed_matrix<double, 3, 4> a{{1, 1, 2}, {2, 2, 2}, {1}, {−1}};
        std::cout << "matrix 3\n";
        print(a);
        std::cout << std::endl;
    }
    catch(...) {
        std::cerr << "cannot initialize matrix\n";
    }
}

int main() {
    test1();
    test2();
    test3();
    return 0;
}