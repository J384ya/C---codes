#include<iostream>
using namespace std;
int main(){
    cout<<"multiplication of two array"<<endl;
    int n,m,p,k;
    cout<<"Enter size of the array "<<endl;
    cin>>n>>m;
    int array1[n][m];
    int array2[n][m];
cout<<"Enter first array"<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>array1[i][j];
        }
    }
cout<<"Enter second array"<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>array2[i][j];
        }  
    }
//----------------------------------------------

 cout<<"first array "<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<array1[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"second array "<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<array2[i][j]<<" ";
        }cout<<endl;
    }

int ans[n][m];

    
}