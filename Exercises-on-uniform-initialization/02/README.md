Write a class _fixed_matrix<T,N,M>_ that offers a matrix (a mathematical matrix) for a numeric
type T of size N×M (both known at compile time). The matrix type should support list initialization.

```cpp
template <typename T, int R, int C>
class fixed_matrix {
public:
    // Missing constructor
    T const & operator()(int r, int c) const {
        return mat_[r][c];
    }

private:
    T mat_[R][C];
};
```

The following test cases should work:

```cpp
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
```
