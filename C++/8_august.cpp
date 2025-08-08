// CONSTANT MEMBER FUNCTIONS
/* A constant member function promises not to modify any member variables of the declared
by adding const at the end of the fxn declaration/definition.
*/

// EXAMPLE
#include <iostream>
using namespace std;
class Point {
    int x, y;
    public:
    Point(int a, int b): x(a), y(b){}
    int getX() const {return x;} // const fxn
    void setX(int val){x = val;}
};


// CONST OBJECT
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int getLength() const {return name.length();}
};

int main(){
    Student st1;
    st1.name = "Random";
    cout<<st1.getLength();
    return 0;
}


// FRIEND FUNCTION 
#include <iostream>
using namespace std;
class Box{
    private :
    int secret;
    public:
    Box(int s): secret(s){}
    friend void revealSecret(const Box& b);
};

void revealSecret(const Box& b) { 
    cout<<b.secret;
}


#include <iostream>
using namespace std;
class Car{
    private:
    int speed;
    public:
    Car(int s): speed(s) {}
    friend class Engine;
};

class Engine {
    public:
    void printSpeed(const Car &c){
        cout<<c.speed;
    }
};