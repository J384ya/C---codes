#include<iostream>
using namespace std;
main(){
    int n = 1;
    int digit;
    cout<<"Enter Number: ";
    cin>>digit;
    for(int i=1;i<=digit;i++){
        if(digit!=0){
           digit =  digit/10;
           n++;
        }
    }
            cout<<n;

}