#include<iostream>
using namespace std;
main()
{
    int n;
    int factorial=1;
    cout<<"Enter Number:";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        factorial*=i;
        cout<<factorial<<endl;
    }
    cout<<"Factorial = "<<factorial;    
}
