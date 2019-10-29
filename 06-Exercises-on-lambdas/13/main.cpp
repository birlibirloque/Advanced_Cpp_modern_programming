#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

template <typename T, typename ... Ops>
void apply_comp_helper(T & v, Ops ... ops);

template <typename T, typename Op, typename ... Ops>
void apply_comp_helper(T & v, Op op, Ops ... ops) {
    op(v);
    if (sizeof...(ops) > 0)
        apply_comp_helper(v, ops...);
}

template <typename T>
void apply_comp_helper(T & v) {}

template <typename It, typename ... Ops>
void apply_comp(It first, It last, Ops ... ops) {
    for (auto i=first; i!=last; ++i) {
        apply_comp_helper(∗i, ops...);
    }
}

std::string remove_vowels(const std::string & s) {
    std::string r;
    r.reserve(s.size());
    for (auto c : s) {
        switch (c) {
            case ’a’: case ’A’:
            case ’e’: case ’E’:
            case ’i’: case ’I’:
            case ’o’: case ’O’:
            case ’u’: case ’U’:
                break;
            default:
                r.push_back(c);
        }
    }
    return r;
}

int main() {
    std::vector<std::string> v;
    v.push_back("Daniel");
    v.push_back("Carlos");
    v.push_back("Jose");
    v.push_back("Manuel");
    
    apply_comp(v.begin(), v.end(),
            [](std::string & s) { s = remove_vowels(s); },
            [](std::string & s) {
                std::transform(s.begin(), s.end(), s.begin(), toupper);
            }
    );

    for (auto x : v) {
        std::cout << x << "\n";
    }
    return 0;
}

