Write a class that keeps a list of values and has a printing function. Optionally, the class may
have a data member where the predicate is stored. If there is a predicate, it should be allocated in dynamic memory.

If the predicate exists, only data items satisfying it are printed. Otherwise, all stored data are printed.

The following main program makes use of such class:


```cpp
int main() {
    filter_printer<double> p;
    p.add_value(1.0);
    p.add_value(−1.0);
    p.add_value(2.0);
    p.add_value(−3.0);
    p.register_filter([](double x) { return x>0.0; });
    std::cout << "Printing filtered data\n";
    p.invoke();
    p.remove_filter();
    std::cout << "\n\nPrinting all data\n";
    p.invoke();
}
```
