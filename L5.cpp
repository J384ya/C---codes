#include<iostream>
using namespace std;
main (){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int sum = 0;
    int i =1;
    while (i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<sum;
    
} 