#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string word1, word2;
    cout << "Give me two words please :)" << endl;
    cin >> word1 >> word2;
    
    if (word1.size() >> word2.size())
    {
        cout << "Word 1 is longer" << endl;
    }
    else
    {
        cout << "Word 2 is longer" << endl;
    }
    
    return 0;
}
