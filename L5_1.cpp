#include<iostream>
using namespace std;
main ()
{
    int i;
    int sum =0;
    for(i=1;i<=5;i++){
        cout<<"Hello World"<<endl<<endl;
    }
    cout<<"Enter Number";
    int n;
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
}