#include<iostream>
using namespace std;
int main()
{
    cout<<"Addition of two numbers "<<endl;
    int a;
    int b;

    cout<<"Enter value of a "<<endl;
    cin>>a;
    cout<<"enter value of b "<<endl;
    cin>>b;
    cout<<"Sum of two Numbers is "<<a+b<<endl;
    
    
    cout<<endl;
    cout<<endl;


    int x,y,z;
    cout<<"swaping of numbers"<<endl;
    cout<<"Enter value of x "<<endl;
    cin>>x;
    cout<<"Enter value of y "<<endl;
    cin>>y;

    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    z=y;
    y=x;
    x=z;

    cout<<"after swap"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    return 0;

}