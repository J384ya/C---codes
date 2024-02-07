#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter any Number";
    cin>>num;
    if ((num%2==0) && (num%3==0))
    {
        cout<<num<<" is even and Divisible by 3";
    }
    else
    {
        cout<<num<<" is even or Divisible by 3";
        
    }
}