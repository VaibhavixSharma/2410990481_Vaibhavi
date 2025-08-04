// Namespaces are used to group similar functions, variables and classes.
// #include --> preprocessor directive, <iostream> --> directive (includes all fxns).
#include <iostream>
using namespace std;
    namespace MyMath{
        int add(int a, int b){
            return a+b;
        }
    } 

int main(){
    int result = MyMath::add(3,4); // To access the fxn, use scope resolution operator (::)
    cout<<result<<endl;
    return 0;
}

// All standard C++ features (like cout, cin, endl etc) are included in namespace std file.

// Nested namespace
namespace Outer{
    namespace inner{
        int x = 42;
    }
}

int main(){
    int y = Outer::inner::x;
    cout<<y<<endl;
    return 0;
}

// Anonymous namespace, used when you want something private to a single file.
namespace {
    int secret = 123;
}
// We can also use 'private' keyword but we need to write private multiple times for that whereas we need to write namespace only once.


// PRACTICE PROBLEMS 
// EASY 1: Output and Explanation
namespace Hello{
    void greet(){
        cout<<"Hello!"<<endl;
    }
}

int main(){
    Hello::greet();
    return 0;
}


// EASY 2: Create your own namespace
namespace Physics{
    double gravity(){
        return 9.8;
    }
}

int main(){
    cout<<"Gravity = "<<Physics::gravity()<<endl;
    return 0;
}


// MEDIUM: Multiple Namespaces
namespace A {
    int val() {
        return 2;
    }
}

namespace B {
    int val(){
        return 5;
    }
}

int main(){
    cout<<A::val()+B::val()<<endl;
    cout<<A::val()<<endl;
    return 0;
}

// using namespace A; // Using directives (not suggested)
// using namespace B;
// int main(){
//     cout<<val()<<endl; // Gives error bcoz val() is used in both
//     return 0;
// }


// HARD: 
namespace lib1{
	void calculate(){
		cout<<"Calculating from lib1\n";
	}
}
namespace lib2{
	void calculate(){
		cout<<"Calculating from lib2\n";
	}
}
int main(){
	lib1::calculate();
    lib2::calculate();
    return 0;
}


