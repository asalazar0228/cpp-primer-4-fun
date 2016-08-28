#include <iostream>
#include <array>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int arr[10];
    int arr2[10];
    for (int i = 0; i != 10; ++i) {
        arr[i] = i;
    }
    for (int i = 0; i != 10; ++i) {
        arr2[i] = arr[i];
    }
    
    for (auto printed : arr2) {
        cout << printed << endl;
    }
    
    return 0;
}