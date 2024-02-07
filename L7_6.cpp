#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int result=1;
    cout<<"Enter Number";
    cin>>a;
    cout<<"Enter Power";
    cin>>b;
    for (int i=0;i<b;i++)
    {
       result =a * result;
       


    }
    cout<<result;
}
