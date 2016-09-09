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
    using int_array = int[4];
    for (int_array& p : arr)
        for (int col : p)
            cout << col << " ";
    
    cout << endl;
    
    //example for normal for loop
    //really not necessary
    using size_arr = size_t;
    for (size_arr i = 0; i != 3; ++i)
        for (size_arr p = 0; p != 4; ++p)
            cout << arr[i][p] << " ";
    cout << endl;
    
    //In actual product code would just re-use the int_array but in this case it will done for the problem
    using row_ref = int [4];
    for (row_ref* row = arr; row != arr +3; ++row) {
        for (int *col = *row; col != *row + 4; ++col) {
            cout << *col << " ";
        }
    }
    cout << endl;
    
    
    
    
    return 0;
    
};