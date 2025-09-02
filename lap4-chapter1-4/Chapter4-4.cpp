#include <iostream>
#include <set>
#include <cmath> 

int main() {
    std::set<int> s = {3, 4, 6, 8, 12, 13, 14, 17};
    std::cout << "Set elements: ";
    for (int x : s) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    
    auto it_begin = s.begin();
    std::cout << "First element: " << *it_begin << std::endl;

    auto it_end = s.end();
    it_end--;
    std::cout << "Last element: " << *it_end << std::endl;

    std::cout << "--------------------" << std::endl;

    
    std::cout << "Elements in increasing order:" << std::endl;
    for (auto it = s.begin(); it != s.end(); it++) {
        std::cout << *it << std::endl;
    }

    std::cout << "--------------------" << std::endl;

    
    int value_to_find = 12;
    auto it_find = s.find(value_to_find);
    if (it_find != s.end()) {
        std::cout << "Value " << *it_find << " was found." << std::endl;
    } else {
        std::cout << "Value " << value_to_find << " was not found." << std::endl;
    }

    std::cout << "--------------------" << std::endl;

    
    int x_bound = 13;
    auto it_lower = s.lower_bound(x_bound);
    auto it_upper = s.upper_bound(x_bound);

    if (it_lower != s.end()) {
        std::cout << "Smallest element >= " << x_bound << " is " << *it_lower << std::endl;
    }
    
    if (it_upper != s.end()) {
        std::cout << "Smallest element > " << x_bound << " is " << *it_upper << std::endl;
    }

    std::cout << "--------------------" << std::endl;
    
    
    int x_nearest = 10;
    std::cout << "Finding element nearest to " << x_nearest << std::endl;
    auto it_nearest = s.lower_bound(x_nearest);

    if (it_nearest == s.begin()) {
        std::cout << "The nearest element is " << *it_nearest << std::endl;
    } else if (it_nearest == s.end()) {
        it_nearest--;
        std::cout << "The nearest element is " << *it_nearest << std::endl;
    } else {
        int a = *it_nearest;
        it_nearest--;
        int b = *it_nearest;
        if (std::abs(x_nearest - b) < std::abs(a - x_nearest)) {
            std::cout << "The nearest element is " << b << std::endl;
        } else {
            std::cout << "The nearest element is " << a << std::endl;
        }
    }

    return 0;
}