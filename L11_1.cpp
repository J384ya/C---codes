#include<iostream>
#include<vector>
using namespace std;
int main (){
    cout<<"Loops in vectors "<<endl;
    vector <int> v;
    int size;
    int Element;
    cout<<"Enter Size of vector: "<<endl;
    cin>>size;

    for (int i=0; i<size; i++)
    {
        cout<<"Enter Elemet No.:  "<<i<<" = ";
        cin>>Element;
        v.push_back(Element);

    }
    cout<<"Size of Vector: "<<v.size()<<endl;
    cout<<"Capacity of Vector: "<<v.capacity()<<endl;

    //printing whole array using diffrent loops 

cout<<endl;
    cout<<"By For Loop "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }

cout<<endl;
    cout<<"By For each loop"<<endl;
    for (int ele:v)
    {
        cout<<ele<<" ";
    }

cout<<endl;
    cout<<"By while Loop"<<endl;
    int idx =0;

    while(idx<v.size())
    {
        cout<<v[idx]<<" ";
        idx++;
    }
}