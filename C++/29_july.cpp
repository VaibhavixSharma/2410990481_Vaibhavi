// WAYS TO CALL A FUNCTION 
#include <iostream>
using namespace std;

// TYPE 1
void change(int x){ //PASS BY VALUE, IT CREATES A COPY OF ARGUMENT, DOES NOT CHANGE ORIGINAL VALUE
    x = 10;
    cout<<x<<endl;
}

int main(){
    int a = 5;
    change(a);
    cout<<a<<endl;
    return 0;
}


// TYPE 2
void change1(int &x){ //PASS BY REFERENCE, CHANGES ORIGINAL VALUE 
    x = 10;
    cout<<x<<endl;
}

int main(){
    int a = 5;
    change1(a); //WE CANNOT TELL IF ORIGINAL VALUE WILL ALSO CHANGE
    cout<<a<<endl;
    return 0;
}


// TYPE 3
void change3(int *x){
    *x = 10; //PASS BY POINTER, CHANGES ORIGINAL VALUE
}

int main(){
    int a = 5;
    cout<<a<<endl;
    change3(&a); //WE CAN TELL IF ORIGINAL VALUE WILL ALSO CHANGE
    cout<<a<<endl;
    return 0;
}


//TYPE 3
int & first(int arr[], int size){
    return arr[0];
}
int main(){
    int data[] = {1, 2, 3};
    first(data, 3) = 99;
    cout<<data[0]<<endl;
}

// FUNCTION OVERLOADING
/*
It is a form of compile time polymorphism
It allows to define multiple functions with same name but different parameters
*/


// PRACTICE QUESTIONS 
// EASY 1
// What will be the output? Why?

void fun(int x){
    x += 5;
}
int main(){
    int a = 10;
    fun(a);
    cout<<a<<endl;
    return 0;
}


// EASY 2
// Write a fxn that swaps the values of two integers using call by reference. Call it in main and show the result.

int swapnum(int &x, int &y){
    int temp;
    temp = y;
    y = x;
    x = temp;
    return 0;
} 

int main(){
    int a = 5;
    int b = 10;
    swapnum(a,b);
    cout<<"a = "<<a<<", "<<"b = "<<b<<endl;
    return 0;
}
