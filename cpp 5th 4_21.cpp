#include <iostream>
#include <vector>
#include <string>

using std::vector; using std::cin; using std::cout; using std::endl; using std::begin; using std::end; using std::string; using std::sort;

int main(){
    
    int grade;
    cin >> grade;
    
    if (grade == 100) {
        cout << "Very High Pass'" << endl;
    }
    if (grade < 99 && grade >= 90 )
        cout << "High Pass" << endl;
    if (grade < 89 && grade >= 80 )
        cout << "High Pass" << endl;
    if (grade < 79 && grade >= 75 )
        cout << "High Pass" << endl;
    if (grade < 75 && grade >= 70 )
        cout << "High Pass" << endl;
    if (grade < 60)
        cout << "High Pass" << endl;
    
};