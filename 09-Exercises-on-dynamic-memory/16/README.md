Write a function that takes a std::string and returns a std::unique_ptr<std::string> with the
string if it has a length greater than zero. Otherwise, the function returns an empty unique_ptr<string>.

It should work with the following main program:

```cpp
int main() {
    auto p1 = get_unique_str("");
    if (p1) {
        std::cout << ∗p1 << "\n";
    }
    else {
        std::cout << "nullptr\n";
    }
    auto p2 = get_unique_str("Hello");
    if (p2) {
        std::cout << ∗p2 << "\n";
    }
    else {
        std::cout << "nullptr\n";
    }
}

```
