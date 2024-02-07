#include<iostream>
using namespace std;
main()
{
    int n;
    int result=0;
    cout<<"Enter Any Number: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        if(i%2==0){
            result-=i;
        }
        else{
            result+=i;
        }
    }
        cout<<result;
    
}