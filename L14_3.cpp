                   //pointers Arthmatic 
// increment and decriment both work diffent in this 
#include<iostream>
using namespace std;
int main(){
    int x=10;
    double d=10;
    double *t=&d;
    int *p=&x;
    cout<<p<<endl<<(p+1)<<endl;
    cout<<t<<endl<<(t+1)<<endl;


//                       ARRAY'S IN POINTERS
int arr[3]{2,5,8};
int *ptr = &arr[0];
cout<<"array "<<ptr<<" "<<arr;// array name it self is a pointer
}