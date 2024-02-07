#include<iostream>
using namespace std;
main (){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    for(int i=n-1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
            n=(n-i+1);
        }
        cout<<endl;
    }
}
