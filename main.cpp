#include <iostream>
#include "vector"
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> test = {1,2,3,4,5};
    for(int i = 1;i<5;){
        std::cout << i<<" "<<test[i++]<<" "<<test[i]<< std::endl;
    }
    return 0;
}
