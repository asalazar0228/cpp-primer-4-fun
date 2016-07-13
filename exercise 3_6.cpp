#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string word("Helllo");
    
    for (decltype(word.size()) index =0; index != word.size() && !isspace(word[index]); ++index) {
        word[index] = 'x';
    }
    
    cout << word << endl;
    return 0;
}
