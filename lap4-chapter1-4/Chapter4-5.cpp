#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

typedef tree<int, null_type, std::less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

int main() {
    indexed_set s;
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(9);
    
    // find_by_order: finds element by its sorted index (0-based)
    auto x = s.find_by_order(2);
    std::cout << "Element at index 2: " << *x << std::endl; // 7
    
    // order_of_key: finds the index of an element
    std::cout << "Index of 7: " << s.order_of_key(7) << std::endl; // 2
    
    // For non-existent elements, it returns the index where it would be
    std::cout << "Index for 6: " << s.order_of_key(6) << std::endl; // 2
    std::cout << "Index for 8: " << s.order_of_key(8) << std::endl; // 3
    
    return 0;
}