// // WHAT WILL THIS PRINT? WHY IS THERE NO DELETE
// #include <memory>
// using namespace std;
// int main(){
//     unique_ptr<int> x(new int(12));
//     return 0;
// }

// // HOW MANY OWNERS AFTER THESE LINES? WHAT HAPPENS AT THE END?
// #include <iostream>
// #include <memory>
// using namespace std;
// int main(){
//     shared_ptr<int> a(new int(100));
//     shared_ptr<int> b = a;
//     shared_ptr<int> c = b;
//     cout<<a.use_count()<<endl;
//     return 0;
// }

#include <iostream>
#include <memory>
int main(){
    
    return 0;
}