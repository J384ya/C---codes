#include<iostream>
using namespace std;
int main(){
                     //   Types of pointers
// 1.Null pointer
// 2.Wild pointer
// 3.Dangling pointer
// 4.Void pointer

//Wild pointer
// when we only decelear a pointer but not initialize 
// so its have so random value 
// as we see in variables they store garbage value in it 
int x;
int *ptr;//   wild pointer stores random value 
cout<<"Wild pointer: "<<ptr<<endl;

// Null Pointer
// if we want to have a poiter variable, which is just declear 
// but will get address later 
int *ptr2=NULL;// null value in pointer 
int *ptr3=NULL;// null value in pointer 
cout<<"Null pointer: "<<ptr2<<"  "<<ptr3<<endl;// a specific address is defined alreddy


// 3.Dangling pointer
// it is a type of pointer that pointes a memoery location which is not valid 
// for example when we use mallog and callog so we see that 
// or in loop where we use loop variable 


// void pointer  
// these are special pointers 
// that can point to any datatype value 
// void pointer can not derefrence

float f = 10.34; 
int i= 40;
void *vptr=&f;// in this we can store any datatype value 
ptr =&x;
cout<<vptr<<endl;
// cout<<*vptr;// will not work 
int *intpointer=(int *)vptr;// we need to type cast its
cout<<"void pointers "<<intpointer<<endl;

return 0;
}