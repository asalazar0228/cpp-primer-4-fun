#include <iostream>
#include <vector>
#include <string>

using std::vector; using std::cout; using std::endl; using std::begin; using std::end; using std::string; using std::sort;

int main(){
    int arr[3][4] =
    {
        { 0, 1, 2, 3 },
        { 4, 5, 6, 7 },
        { 8, 9, 10, 11 }
    };
    
    // example for range loop
    for (int(&row)[4] : arr)
        for (int col : row)
            cout << col << " ";
    
    cout << endl;
    
    //example for normal for loop
    for (size_t i = 0; i != 3; ++i)
        for (size_t p = 0; p != 4; ++p)
            cout << arr[i][p] << " ";
    cout << endl;
        
    
    for (int (*row)[4] = arr; row != arr +3; ++row) {
        for (int *col = *row; col != *row + 3; ++col) {
            cout << *col << " ";
        }
    }
    cout << endl;
    
    
    
    
    return 0;
    
};