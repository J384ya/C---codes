#include<iostream>
using namespace std;
int main(){
    int comp;
    int ans=-1;
    int arr[10]{1,2,4,6,7,3,6,8,8,0};
    cout<<"Enter Number to find in array: ";
    cin>>comp;
    for(int i=0;i<10;i++){
        if (comp==arr[i])
        {
            ans=i;
        }
    }
    cout<<ans;
}