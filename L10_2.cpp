#include<iostream>
using namespace std;
int main(){
    cout<<"Sum of all element of the array"<<endl;
    int arr[]{1,2,3,4};
    int sum =0;
    for (int i=0;i<4;i++)
    {
        sum=sum+arr[i];
    }
 cout<<sum;    
}
