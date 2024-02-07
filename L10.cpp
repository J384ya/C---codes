/*
what is array ?
- array is a data structure where we store collection of values.
- its store homogenios memory.
- its take continues memory.
- index represent location of every element. 
- its start with 0 index.
*/

/*
Types of Arrays :-
one dimentional Array:- 
-
multi-dimentional Array:-
- matrix
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]{1,2,3,4};
    cout<<"Size of array: "<<sizeof(arr)<<endl;//total lenght of array
    cout<<"Size of Element: "<<sizeof(arr)/sizeof(arr[0])<<endl;//lenght of array
    cout<<arr[0];
    cout<<arr[1];
    cout<<arr[2];
    cout<<arr[3];
}

