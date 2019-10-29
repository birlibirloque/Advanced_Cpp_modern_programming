#include <iostream>

struct customer {
    int id;
    std::string name;
    std::string family_name;
    customer(int i, std::string const &n, std::string const &fn)
        : id{i}, name{n}, family_name{fn} {}
};

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
    return 0;
}

