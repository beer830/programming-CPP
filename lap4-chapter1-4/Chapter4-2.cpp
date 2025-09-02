#include <iostream>
#include <set>
#include <string>

int main() {
    
    std::set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);

    std::cout << "Count of 3: " << s.count(3) << std::endl; // 1
    std::cout << "Count of 4: " << s.count(4) << std::endl; // 0

    s.erase(3);
    s.insert(4);

    std::cout << "Count of 3 after erase: " << s.count(3) << std::endl; // 0
    std::cout << "Count of 4 after insert: " << s.count(4) << std::endl; // 1

    std::cout << "--------------------" << std::endl;

    
    std::set<int> s2 = {2, 5, 6, 8};
    std::cout << "Size of set: " << s2.size() << std::endl; // 4

    std::cout << "Elements of the set: " << std::endl;
    for (auto x : s2) {
        std::cout << x << std::endl;
    }

    std::cout << "--------------------" << std::endl;

    
    std::set<int> s3;
    s3.insert(5);
    s3.insert(5);
    s3.insert(5);

    std::cout << "Count of 5 after multiple insertions: " << s3.count(5) << std::endl; // 1
    
    return 0;
}