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


bool compare_functions(std::string::iterator ptrb1, std::string::iterator ptre1, std::string::iterator ptrb2, std::string::iterator ptre2 ) {
    if ((ptre1 -ptrb1) != (ptre2 - ptrb2)) {
        return false;
    }
    
    else {
        for (std::string::iterator i = ptrb1,p = ptrb2 ; (i != ptre1) && (p != ptre2); ++i, ++p) {
            if (*i != *p) {
                return false;
            }
        }
        
        return true;
    }

};


int main()
{
    string arr1 = "Hello";
    string arr2 = "Hello";
    
    if (compare_functions(arr1.begin(), arr1.end(), arr2.begin(), arr2.end())) {
        cout << "They are equalll !!!" << endl;
    } else {
        cout << "They are not equal :(" << endl;
    }
    
    
    return 0;
}