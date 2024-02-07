#include<iostream>
using namespace std;
int main (){
    //travese in array 
    //print every element of the array we will do this.

    int arr[]{1,2,3,4};//our array
    int size=sizeof(arr)/sizeof(arr[0]);
cout<<"by for loop";
cout<<endl;


    for (int i=0; i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
cout<<endl;
cout<<endl;
// we also can use for each loop for it it will also traverse the all elements of the array.
//but in for each loop we can stop it where we want or we say we dont hava flexibility of travese.
cout<<"by for each loop";
cout<<endl;


for(int ele:arr){
    cout<<ele<<endl;
}

cout<<endl;
cout<<endl;

int index =0;
cout<<"by while loop";
cout<<endl;

while (index<size)
{
    cout<<arr[index]<<endl;
    index++;
}

// taking input in array 

char name[5];
for (int i=0;i<5;i++)
{
    cin>>name[i];
}
for (int i=0;i<5;i++)
{
    cout<<name[i];
}
}