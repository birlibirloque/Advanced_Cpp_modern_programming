Given the following customer structure:

```cpp
struct customer {
    int id;
    std::string name;
    std::string family_name;
    customer(int i, std::string const &n, std::string const &fn)
        : id{i}, name{n}, family_name{fn} {}
};
```

Write a function filter_and_sort that takes

* A vector with customer information.
* A generic predicate on a customer.
* A generic comparison criteria between two customers.

The function should return a new vector where only customers that satisfy the predicate are
stored. Such a vector should be sorted according to the comparison criteria.

Complete the call filter_and_sort in the main program so that the program prints sorted by
family name, and the by name all the people in the list whose id is greater than 1. Use lambda
expressions for passing the criteria to the function filter_and_sort().

```cpp
int main() {
    std::vector<customer> v;
    v.emplace_back(3, "David", "Wheeler");
    v.emplace_back(11, "J. Daniel", "Garcia");
    v.emplace_back(2, "Bjarne", "Stroustrup");
    v.emplace_back(0, "Herb", "Sutter");
    v.emplace_back(5, "Carlos", "Garcia");
    
    auto r = filter_and_sort(v, /∗ Fill in the arguments∗/);
    for (auto const &c : r) {
        std::cout << "Id: " << c.id;
        std::cout << " Name: " << c.name;
        std::cout << " Family name: " << c.family_name << "\n";
    }
}
```

