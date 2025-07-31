// LAMBDA FUNCION 
// PRACTICE QUESTIONS

// EASY 1
// What will be output and why?
#include <iostream>
using namespace std;

int main(){
    auto greet = [](){
        cout<<"Welcome!\n";
    };
    greet();

    return 0;
}


//EASY 2
// Write a lambda fxn that sqaures and prints the result. Call it with 6.
#include <iostream>
using namespace std;

int main(){
    auto sqr = [](int a){
        cout<<a*a<<endl;
    };
    sqr(6);
    return 0;
}


// MEDIUM
// Use a lambda and loop to print only even numbers from this array.
#include <iostream>
using namespace std;

int main(){
    int arr[] = {4, 7, 10, 13};
    int i;
    auto even1 = [](int x){
        if(x%2 == 0){
            cout<<x<<endl;
        }
    };
    for(i = 0; i<4 ; i++){
        even1(arr[i]);
    }

    return 0;
}


// HARD
// Given int sum = 100;, write a lambda fxn that takes an integer x, adds it to sum, and updates the original sum variable. Show sum is updated after calling lambda.
#include <iostream>
using namespace std;

int main(){
    int sum = 100;
    auto update = [&sum](int x){
        sum += x;
    };
    update(10);
    cout<<sum<<endl;
    return 0;
}