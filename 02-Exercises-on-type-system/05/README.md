Develop a class fixed_vector for fixed size vectors with the following interface:

```cpp
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
```

Modify such class so that it is usable in range based for-loops, making the following code valid.

```cpp
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
}
```

