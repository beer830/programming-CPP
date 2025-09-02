#include <iostream>
#include <map>
#include <string>

int main() {
    
    std::map<std::string, int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;

    
    std::cout << m["banana"] << std::endl; // 3

    std::cout << "--------------------" << std::endl;

    
    std::cout << m["aybabtu"] << std::endl; // 0

    std::cout << "--------------------" << std::endl;

    
    if (m.count("aybabtu")) {
        std::cout << "The key 'aybabtu' exists in the map." << std::endl;
    }

    if (m.count("apple")) {
        
    } else {
        std::cout << "The key 'apple' does not exist in the map." << std::endl;
    }

    std::cout << "--------------------" << std::endl;

    
    std::cout << "All elements in the map:" << std::endl;
    for (auto x : m) {
        std::cout << "Key: " << x.first << ", Value: " << x.second << std::endl;
    }

    return 0;
}