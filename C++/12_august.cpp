#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor\n";
    }
};

int main() {
    Derived obj; 
}


#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"constructor called from A"<<endl;
    }
};
    class B : public A{};
    class C : public A{};

    class D: public B,public C{};
    int main()
    {
        D d;

    }


#include<iostream>
using namespace std;

class A {
public:
    A() {
        cout << "constructor called from A" << endl;
    }
    void greet() {
        cout << "hello";
    }
};

class B : virtual public A {};
class C : virtual public A {};
class D : virtual public B, public C {};

int main() {
    D d;
}


#include<iostream>
using namespace std;

class A
{
private:
    int a = 1;

public:
    int b = 1;

protected:
    int c = 2;
};
class B : public A
{
    void use()
    {
        //  cout<<a;
        cout << b;
        cout << c;
    }
};
int main()
{
    A a;
    // cout<<a.a;
    cout << a.b;
    // cout<<a.c;
}


#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw()=0;
    void move(){
        std::cout<<"Moving shape"<<std::endl;
    }
};
class Circle: public Shape{
    public:
    void draw() override{
        std::cout<<"Drawing Circle "<<std::endl;
    }
};
int main(){
    Circle c;
    c.draw();
    c.move();
}