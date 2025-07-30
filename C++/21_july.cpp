// #include <iostream>
// // #include <string>
// using namespace std;
// int main(){
//     //DECLARING VARIABLES
//     int emp_id;
//     string emp_name;
//     double basic_salary;
//     int exp_years;
//     double bonus;
//     //TAKING INPUT
//     cout<<"Enter Employee ID: "; cin>>emp_id;
//     cin.ignore();
//     cout<<"Enter Employee Name: "; getline(cin,emp_name);
//     cout<<"Enter Basic Salary: $"; cin>>basic_salary;
//     cout<<"Enter years of experience: "; cin>>exp_years;
//     //CALCULATING BONUS
//     if(exp_years<2){
//         bonus = 0.05*basic_salary;
//     }else if(2<=exp_years<=5){
//         bonus = 0.1*basic_salary;
//     }else{
//         bonus = 0.15*basic_salary;
//     }
//     //DISPLAYING OUTPUT
//     cout<<endl<<"== EMPLOYEE DETAILS =="<<endl<<"ID: "<<emp_id<<endl<<"Name: "<<emp_name<<endl<<"Basic Salary: $"<<basic_salary<<endl<<"Experience: "<<exp_years<<endl<<"Bonus: "<<bonus<<endl<<"Total Salary: "<<basic_salary+bonus;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     double temp;
//     char unit;
//     double C_temp, F_temp, K_temp;
//     cout<<"Enter Temperature = "; cin>>temp;
//     cout<<"Enter Unit (C/F/K) = "; cin>>unit;
//     if(unit == 'C'){
//         K_temp = temp+273;
//         F_temp = (temp * 9/5) + 32;
//         cout<<"Temperature in Kelvin = "<<K_temp<<endl<<"Temperature in Farenheit = "<<F_temp<<endl;
//     }else if(unit == 'F'){
//         K_temp = (temp - 32) * 5/9 + 273;
//         C_temp = (temp - 32) * 5/9;
//         cout<<"Temperature in Kelvin = "<<K_temp<<endl<<"Temperature in Celsius = "<<C_temp<<endl;

//     }else if{unit == 'K'
//         C_temp = temp-273;
//         F_temp = (temp - 273) * 9/5 + 32;
//         cout<<"Temperature in Celsius = "<<C_temp<<endl<<"Temperature in Farenheit = "<<F_temp<<endl;

//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int number;
//     cout<<"Enter a Number = "; cin>>number;
//     cout<<"Number analysis for "<<number<<endl;

//     if(number%2 == 0){
//         cout<<"Even: Yes"<<endl;
//     }else{
//         cout<<"Even: No"<<endl;
//     }

//     if(number>0){
//         cout<<"Positive: Yes"<<endl;
//     }else{
//         cout<<"Positive: No"<<endl;
//     }

//     if(number%3 == 0){
//         cout<<"Divisible by 3: Yes"<<endl;
//     }else{
//         cout<<"Divisible by 3: No"<<endl;
//     }

//     if(number%5 == 0){
//         cout<<"Divisible by 5: Yes"<<endl;
//     }else{
//         cout<<"Divisible by 5: No"<<endl;
//     }

//     if(9>=number>=0){
//         cout<<"Single digit: Yes"<<endl;
//     }else{
//         cout<<"Single digit: No"<<endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int bank_balance;
// int main(){
//     int account_balance;
//     static int transactions = 0;
//     cout<<"Initial Account Balance: "<<endl; cin>>account_balance;
//     cout<<"Initial Bank Balance: "<<endl; cin>>bank_balance;
//     return 0;
// }

// int depositMoney(int account_balance, int transactions){
//     int deposit;
//     cin>>deposit;
//     account_balance = account_balance+deposit;
//     bank_balance = bank_balance+deposit;
//     transactions++
//     return 0;
// }

// int withdrawmoney(int account_balance, int transactions){
//     int withdraw;
//     cin>>withdraw;
//     account_balance = account_balance-withdraw;
//     bank_balance = bank_balance-withdraw;
//     transactions++
//     return 0;
// }

// displaybalance(int account_balance, int deposit, int withdraw,int transactions){
//     cout<<"After deposit of "<<deposit<<":"<<endl<<"Account Balance: "<<account_balance<<endl<<"Total Bank Balance: "<<bank_balance<<endl<<"Total Transactions: "<<transactions<<endl;

// }


// #include <iostream>
// using namespace std;
// int main(){
//     int base, int exp, int a, int b, static int n; int num; int choice;
//     cout<<"SCIENTIFIC CALCULATOR"<<endl<<"==================="<<endl;
//     cout<<"Available Operations"<<endl<<"1. Power calculation (optimized by powers of 2)"<<endl<<"2. Factorial (with caching)"<<endl<<"3. GCD calculation"<<endl<<"4. Prime checking"<<endl<<"5. Complex expression evaluation"<<endl<<"6. Show calculation statics"<<endl<<endl;
//     cout<<"Enter your choice: "; cin<<choice;
//     cout<<endl<<endl;
//     if(choice == 1){
//         cout<<"Base for power: "; cin>>base;
//         cout<<"Exponent: "; cin>>exp;
//         power(base, exp);
//     }else if(choice == 2){
//         cout<<"Number for factorial: "; cin>>n;
//         factorial(n);
//     }else if(choice == 3){
//         cout<<"First number for GCD: " cin>>a;
//         cout<<"Second number for GCD: " cin>>b; 
//         GCD(a,b);      
//     }else if(choice == 4){
//         cout<<"Number to check prime: " cin>>num;
//         isprime(num);
//     }else{
//         cout<<"Base for power: "; cin>>base;
//         cout<<"Exponent: "; cin>>exp;
//         cout<<"Number for factorial: "; cin>>n;
//         cout<<"First number for GCD: " cin>>a;
//         cout<<"Second number for GCD: " cin>>b;
//         cout<<"Number to check prime: " cin>>num;
        
//     }
//     return 0;
// }


