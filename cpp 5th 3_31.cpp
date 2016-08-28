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
        for (auto p : arr) {
            arr2[i] = p;
        }
    }
    
    for (auto printed : arr2) {
        cout << printed << endl;
        cout << "eyyyy" << endl;
    }

    return 0;
}
