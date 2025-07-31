// TRAFFIC LIGHT STIMULATOR
#include <iostream>
using namespace std;
int main(){
    char light;
    int time;
// TAKING INPUTS
    cout<<"Enter current light (R/G/Y): "; cin>>light;
    cout<<"Enter remaining time: "; cin>>time;
// DISPLAYING OUTPUTS RESPECTIVELY
    if(light == 'R'){
        cout<<endl<<"Current: RED light"<<endl<<"Countdown: ";
        for(time; time>=0;time--){
            cout<<time<<" ";
        }
        cout<<"GREEN light is activated for 45 seconds";
    }else if(light == 'G'){
        cout<<"Current: GREEN light"<<endl<<"Countdown: ";
        for(time; time>=0;time--){
            cout<<time<<" ";
        }
        cout<<endl<<"Yellow light activared for 5 seconds"<<endl<<"Next: RED light will activate after 5 seconds";
    }else{
        cout<<"Current: YELLOW light"<<endl<<"Countdown: ";
        for(time; time>=0;time--){
            cout<<time<<" ";
        }
        cout<<endl<<"RED light is activated for 30 seconds";
    }
    return 0;
}


// PASSWORD DETECTOR
#include <iostream>
int main(){
    string password;
    int length = 0;
    int up_count = 0;
    int low_count = 0;
    int num = 0;
    int spcl = 0;
    cout<<"Enter password: ";
    getline(char,password);
    for(char ch:password){
        length++;
        if('Z'>= ch >= 'A'){
            up_count++;
        }else if('z'>= ch >= 'a'){
            low_count++;
        }else if(ch : "!@#$%&"){
            spcl++;
        }else{
            num++;
        }
    }

    if(length >=9 && up_count != 0 && low_count != 0 && spcl != 0 && num != 0){
        cout<<"Strong Password";
    }else if()
    return 0;
}
