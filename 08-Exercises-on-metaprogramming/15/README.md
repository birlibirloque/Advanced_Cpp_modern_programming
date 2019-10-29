Write a function that prints the values in a range.

* When called with two iterators, all elements in the range are printed.
* When called with an iterator and some value of an integral type, the first n values starting from the iterator are printed.
* A compiler error is generated in any other case.

The following main program should be supported:


```cpp
int main() {
    std::vector<int> v{1,2,3,4,5};
    print_ranges(v.begin(), v.end());
    print_ranges(v.begin(), 3);
    print_ranges(v.begin(), "hello"); // Compiler error
}
```

