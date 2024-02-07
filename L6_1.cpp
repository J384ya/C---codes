#include<iostream>
using namespace std;
main (){
    int n;
    int m;
    cout<<"Enter Number of Rows: ";//n
    cin>>n;
    cout<<"Enter Number of Columns: ";//m
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}