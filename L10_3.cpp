#include<iostream>
using namespace std;
int main()
{
    cout<<"Finding a largest element in array. "<<endl;
    int max=0;
    int arr[7]{2,5,6,2,8,5,0};
    for(int i=0;i<7;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest Element is "<<max;
    
}
