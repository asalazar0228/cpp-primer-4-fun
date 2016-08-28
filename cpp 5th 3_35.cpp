#include <iostream>
#include <array>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int arr[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};
    
    for (auto i: arr) {
        for (auto p = arr2) {
            if (*i != *p) {
                cout << "They do not match :(" << endl;
            }
        }
    }
    
    cout << "All numbers match" << endl;
    
    return 0;
}