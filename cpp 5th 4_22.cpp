#include <iostream>
#include <vector>
#include <string>

using std::vector; using std::cin; using std::cout; using std::endl; using std::begin; using std::end; using std::string; using std::sort;

int main(){
    
    int grade;
    cin >> grade;
    
    //my version of the grade program lol
    if (grade == 100)
        cout << "Very High Pass'" << endl;
    else if (grade < 99 && grade >= 90 )
        cout << "High Pass" << endl;
    else if (grade < 89 && grade >= 80 )
        cout << "Good" << endl;
    else if (grade < 79 && grade >= 75 )
        cout << "Low Pass" << endl;
    else if (grade < 75 && grade >= 70 )
        cout << "Very Low Pass" << endl;
    else
        cout << "Come see teacher" << endl;
    
};