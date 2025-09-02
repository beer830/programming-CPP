#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> v;
    v.push_back(3); // [3]
    v.push_back(2); // [3,2]
    v.push_back(5); // [3,2,5]

    
    std::cout << "Vector elements accessed by index:" << std::endl;
    std::cout << v[0] << std::endl; // 3
    std::cout << v[1] << std::endl; // 2
    std::cout << v[2] << std::endl; // 5

    
    std::cout << "Iterating with a standard for loop:" << std::endl;
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    }

    
    std::cout << "Iterating with a range-based for loop:" << std::endl;
    for (auto x : v) {
        std::cout << x << std::endl;
    }

    
    std::vector<int> v2;
    v2.push_back(5);
    v2.push_back(2);
    std::cout << "The last element is: " << v2.back() << std::endl; // 2
    v2.pop_back();
    std::cout << "The new last element is: " << v2.back() << std::endl; // 5

    
    std::vector<int> v3 = {2, 4, 2, 5, 1};
    std::cout << "Elements of v3:" << std::endl;
    for (auto x : v3) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    
    
    std::vector<int> v4(10); // size 10, all elements initialized to 0
    std::cout << "Size of v4: " << v4.size() << std::endl;
    
    std::vector<int> v5(10, 5); // size 10, all elements initialized to 5
    std::cout << "Elements of v5:" << std::endl;
    for (auto x : v5) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}