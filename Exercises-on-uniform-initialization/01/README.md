Write a class _fixed_vector<T,N>_ that offers a sequence container for a type T of size N,
where the size is known at compile time. The container should support list initialization and must be
compatible with the following user code:

```cpp
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
```
