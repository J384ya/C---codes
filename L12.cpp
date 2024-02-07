#include<iostream>
using namespace std;
int main()
{
    //its like a table
cout<<"Multi-dimensional array"<<endl;
int n;
int m;
cout<<"Enter No. of rows: "<<endl;
cin>>n;
cout<<"Enter No. of colunms: "<<endl;
cin>>m;

int array [n][m];// 4 rows and 3 colunms
// i = rows and j = colunms
// we use nested loops for this 2D array 
cout<<"Enter Elements of the array"<<endl;

for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
        cin>>array[i][j];
}
}

// similarly for print the array 
// we use for loop
cout<<"printing array "<<endl;
for (int i=0;i<n;i++){
    for (int j= 0;j<m;j++){
        cout<<array[i][j]<<" ";
    }cout<<endl;
}
}
