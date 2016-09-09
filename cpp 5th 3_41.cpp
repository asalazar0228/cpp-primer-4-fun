#include <iostream>
#include <vector>
#include <array>

int main() {
    int arr[] = {1,2,3,4,5,6};
    
    std::vector<int> ivec(std::begin(arr), std::end(arr));
    
    for (auto i = ivec.begin(); i != ivec.end(); i++)
        std::cout << *i << std::endl;
    
    return 1;
};