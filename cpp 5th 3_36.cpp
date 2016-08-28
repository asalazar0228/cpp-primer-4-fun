#include <iostream>
#include <array>
#include <vector>
#include <iterator>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;


bool compare_functions(int* const ptrb1, int* const ptre1, int* const ptrb2, int* const ptre2 ) {
    if ((ptre1 -ptrb1) != (ptre2 - ptrb2)) {
        return false;
    }
    
    else {
        for (int* i = ptrb1,*p = ptrb2 ; (i != ptre1) && (p != ptre2); ++i, ++p) {
            if (*i != *p) {
                return false;
            }
        }
        
        return true;
    }

};


int main()
{
    int arr[] = {0,1,2,3,4,6};
    int arr2[] = {0,1,2,3,4,6};
    
    if (compare_functions(begin(arr), end(arr), begin(arr2), end(arr2))) {
        cout << "They are equalll !!!" << endl;
    } else {
        cout << "They are not equal :(" << endl;
    }
    
    
    return 0;
}