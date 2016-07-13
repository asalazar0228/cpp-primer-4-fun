#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string word;
    cout << "Please give me a string" << endl;
    cin >> word;
    
    for (auto &c : word)
    {
        if (ispunct(c)) {
            c = ' ';
        }
    }
    
    cout << word << endl;
    return 0;
}
