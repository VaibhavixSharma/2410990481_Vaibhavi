// LAMBDA FUNCTION 
/*
it is a inline, quick, unnamed fxn for quick jobs. 
Use capture list [] to access outside variabes.
[x] --> captures by value. [&x] --> captures by reference.
() ---> to pass arguments
*/

#include <iostream>
using namespace std;
int main(){
    auto sayhello = [](){
    cout<<"Hello\n";
};
    sayhello();
    return 0;
}
