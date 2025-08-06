// ACCESS SPECIFIERS = keywords used to set the accessibility of the class members.
/*
Public -> can be accessed from anywhere.
Private -> only accessible within base class, completely hidden from other classes. (used for sensitive data)
Protected -> accessible inside class and derived (child) class, but not in main.
*/

// EXAMPLE USING ALL SPECIFIERS
#include <iostream>
using namespace std;
class Base{
    public:
    int pub = 1; // Accessible everywhere.
    protected:
    int prot = 2; // Accessible in class and subclasses. 
    private:
    int priv = 3; // Only accessible in base.
};

class Derived: public Base{
    public:
    void accessBaseMembers(){
        cout<<"Public: "<<pub<<endl; // OK
        cout<<"Protected: "<<prot<<endl; // OK
        // cout<<"Private: "<<priv<<endl; // Error: Private
    }
};

int main(){
    Base b;
    cout<<b.pub<<endl; // OK
    // cout<<b.prot<<endl; // Error
    // cout<<b.priv<<endl; // Error
    return 0;
}


// Static Data Members 
#include <iostream>
using namespace std;
class demo{
    public:
    static int counter;
    demo(){
        counter++;
    }
};

int demo::counter = 0;
int main(){
    demo a, b, c;
    cout<<"Total objects created = "<<demo::counter<<endl;
    return 0;
}

// Static Member Function
#include <iostream>
using namespace std;
class math{
    public:
    static int square(int x){
        return x*x;
    }
};

int main(){
    cout<<"Square of 4 = "<<math::square(4)<<endl;
    return 0;
}


// VARIABLES IN C++
// 1. Local Variable
#include <iostream>
using namespace std;
void fun() {
    int x = 10; // local variable
    cout<<x<<endl;
}

int main(){
    // cout<<x<<endl; // Can't be accessed 
    return 0;
}


#include <iostream>
using namespace std;
class car{
    public:
    int speed;
};

int main(){
    car c1, c2;
    c1.speed = 50;
    c2.speed = 70;
    cout<<c1.speed<<", "<<c2.speed<<endl;
    return 0;
}