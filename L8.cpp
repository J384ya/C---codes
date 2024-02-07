/*
Function in C++ :
its a logical set of code perform a specific task
we give input into these functions as parameters

why are functions important in C++?
    - code reuse ability
    - Dry principle (dont repeat yourself)
    - easy to read

Tyepes of Functions :
    - user defined function: 
    retutrn_type function_name(Parameter1, parameter2...,){
        Statements;
    } 
 
    - standard Library Functions:
        - to use these we need to include header file ( cmath )
        -already in library
        -Ex-->
        pow(a,b) a power b
        sqrt(a)  Squre root 


call a function :
to call a function in C++, you have to write the function name 
followed by two parentheses () and a semicolonl;


Function Prototype:
if we dont want to write on below the execution fucntion,
( Or we can say before funtion call )
so we have to make a prototype of it
example:- int add(int, int);  prototype 

*/

#include<iostream>
using namespace std;

    int add (int num1, int num2){
    int sum=num1+num2;
    return sum;
    }

    int add (int num1, int num2, int num3){
    int sum=num1+num2+num3;
    return sum;
    }

    float add (float num1, float num2){
    float sum=num1+num2;
    return sum;
    }

    int main(){

    int a=5;
    int b=3;
    int c=9;
    float f=2.4;
    float g=3.8;

    cout<<"function 1: "<<add(a,b)<<endl;//function 1 
    cout<<"function 2: "<<add(a,b,c)<<endl;//function 2 
    cout<<"function 3: "<<add(f,g)<<endl;//fuction 3 

    return 0;

}