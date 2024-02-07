/*
Scope of variables in C++ :-
    - its a port of code from where are variable is accessable 
    - in code some where we can not access the variable we use this Scope 
    -Scope resolution --> :: to access global variable


Local variables:-
    - those variables which is define under function 

Global variables:-
    - These are the variables that exist throughout the whole program and 
    can be used in any part of the program.


loacl  variable >> global variable 

*/

/*
Formal Parameters and Actual Parameters 

*/
#include<iostream>
using namespace std;
void function_name(int par1, int par2){//(these are formal perameters){
    //code 
}


/*
pass by values and pass by refrence:-
    - copy will be created in call by value.
    - actuall values are pass in call by refrence.

    - in pass by refrence both use same address.
*/
void change_value(int z){
    z=200;
}
int main(){
    int a=3;
    int b=5;
    int p=5;//for refrence example 
    int &q=p;//for refrence example both use same momory address in this method
    function_name(a,b);  //(actuall perameretere)
    change_value(a);
    cout<<"Example of pass by value";
    cout<<"By change value function: "<<a<<endl;
    cout<<"Example of pass by refrence";

    q++;
    cout<<"By sec.value function: "<<p<<endl;

    return 0;
}


