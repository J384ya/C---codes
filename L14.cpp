                                     // Pointers
#include<iostream>
using namespace std;
int main (){
int x=10; 
float y=2.03; 

// To Access memory address of an object we use Address of opertor
// ' & ' its a symbol we use 
cout<<&x<<" "<<&y<<endl;
 
// intro to pointes 
// pointers are special type of veriable where we can store an address of a veriable
 
int *p = &x; // we use * to show its a pointer and p is a veriable
cout<<p<<endl;
// upper one is a int type pointer variable 
// simmiarly we can create a differnt types of data type variable 
// to store a differnte data type variables address 
float *a=&y;


//Dereference operator
// we use ' Dereference ' operator to access, 
// what value store on that address which store in pointer 

cout<<*a<<endl; // this will print value store on that address
cout<<a<<endl; // this will print address of the varibale 

    int j,b;
    cout<<"Enter values for addition ";
    cin>>x>>y;
    int *v1=&j;
    int *v2=&b;

    int sum;    
    int *s=&sum;

    *s =*v1+*v2;
    cout<<*s<<endl;
}


