#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::endl; using std::begin; using std::end;


int main() {
    
    vector<int> ivec = {1,2,3,4,5,6};
    
    int arr[6];
    
    for (int i = 0; i != ivec.size(); ++i)
        arr[i] = ivec[i];
    
    for (auto i : arr)
        cout << i << endl;
            
    
    return 0;
};