// OOP in Code: we represent real-world things as objects in programming. Also used to store complex data efficiently. 
// Each object bundles together bith data (properties/attributes) and behaviors (functions/actions).

/*
Class VS Objects
CLASS --> blueprint describing what an object should be made of, specifies both data and actions. (eg: Map of houuse).
OBJECT --> A specific, concrete thing created using class, Allocated dynamically on the heap (with pointers). (eg: Actual house).
*/

// CODE EXAMPLE 
#include <iostream>
using namespace std;

class Book{ // class
    public:
    string title;
    int pages;
};

int main(){
    Book myBook; // object, 'Book' is datatype (user defined) of 'myBook'. STORES IN STACK.
    myBook.title = "The Hobbit"; // access using dot (.)
    myBook.pages = 310;
    cout<<myBook.title<<endl;
    cout<<myBook.pages<<endl;

    Book* ptr = new Book; // returns address of book class. STORES IN HEAP.
    ptr->title = "C++ Primer"; // access using arrow operator (->) for pointers.
    ptr->pages = 900;
    cout<<ptr->title<<endl<<ptr->pages<<endl;
    delete ptr; // DON'T FORGET TO FREE MEMORY IF USING NEW. WE ARE USING RAW POINTER NOT SMART.
    return 0;
}


class greet{
    public:
    void greeting(){
        cout<<"Hello!";
    }
};

int main(){
    greet printhello;
    printhello.greeting();
    return 0;
}

// Differences: Primitives hold just a number or symbol whereas Objects are collection of data and behaviors, often tied together.
// Similarities: Memory allocation in Heap for both.

/*
ENCAPSULATION: It is a central OOP idea, it involves wrapping up data and fxns that work on that data into a single unit (class). 
WHY? -> keeps data and actions together, reduces confusion in large codebases.
HOW? -> Use private and public specifiers.
        public = accessible from outside the class.
        private = only accessible by the class itself (hidden outside class).
*/

//EXAMPLE
class BankAccount{
    private:
    double balance; // hidden

    public:
    void deposit(double amount){
        balance += amount;
    }

    double getBalance(){
        return balance;
    }
};


// PRACTICE PROBLEMS AND ACTIVITIES
// EASY 1: Write a class called student with two public members: Name, roll no. and print them.
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
};

int main(){
    Student student1;
    student1.name = "John";
    student1.rollno = 20;
    cout<<"Student Name = "<<student1.name<<endl<<"Student Roll No. = "<<student1.rollno<<endl;
    return 0;
}


// MEDIUM
#include <iostream>
using namespace std;
class wallet{
    private:
    int balance;

    public:
    void setbalance(int amount){
        balance = amount;
    }

    int getbalance(){
        return balance;
    }
};

int main(){
    wallet w;
    w.setbalance(500);
    cout<<w.getbalance()<<endl;
    return 0;
}


// HARD
#include <iostream>
using namespace std;
class bankaccount{
    private:
    int balance = 0;

    public:
    void deposit(int amount){
        balance += amount;
    }

    void withdraw(int amount){
        balance -= amount;
    }

    int getbalance(){
        return balance;
    }
};

int main(){
    bankaccount A;
    bankaccount B;

    // A.balance = 100;
    // B.balance = 200;

    A.deposit(1000);
    B.deposit(500);

    A.withdraw(200);
    B.withdraw(200);

    cout<<"Balance of A = "<<A.getbalance()<<endl<<"Balance of B = "<<B.getbalance();
    return 0;
}


#include <iostream>
using namespace std;
class student{
    public:
    string name;
    struct address
    {
        string city;
        int pincode;
    };
    address A;
};

int main(){
    student* student1 = new student;
    student1->name = "John";
    student1->A.city = "Chandigarh";
    student1->A.pincode = 160022;
    cout<<student1->name<<endl<<student1->A.city<<endl<<student1->A.pincode<<endl;
    delete student1;
    return 0;
}