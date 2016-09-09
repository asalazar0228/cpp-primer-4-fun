#include <iostream>
#include <vector>
#include <string>

using std::vector; using std::cin; using std::cout; using std::endl; using std::begin; using std::end; using std::string; using std::sort;

int main(){
    int check;
    
    while (cin >> check && check != 42) {
        cout << check << endl;
    }
    
};