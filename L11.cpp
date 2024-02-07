// Vectors in C++.
// Vectors are dynamic arrays.
// we can resize the array when we want to insert or delete in array.
// Continues memory alocation
// for Vector we include vector in header file

#include<iostream>
#include<vector>//for using vector in code 
using namespace std;
int main(){
    cout<<"Vectors in C++"<<endl;
    cout<<endl;

    vector<int> v; // defining vector

    cout<<"Size of vector "<<v.size()<<endl;
    cout<<"Capacity of vector "<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(1); // To insert Element in the vector 
    cout<<"Size of vector after inserting 1 in vector : "<<v.size()<<endl;
    cout<<"Capacity of vector after insertin 1 in vector : "<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(2); // To insert Element in the vector 
    cout<<"Size of vector after inserting 2 in vector : "<<v.size()<<endl;
    cout<<"Capacity of vector after insertin 2 in vector : "<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(3); // To insert Element in the vector 
    cout<<"Size of vector after inserting 3 in vector : "<<v.size()<<endl;
    cout<<"Capacity of vector after insertin 2 in vector : "<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(5); // To insert Element in the vector 
    cout<<"Size of vector after inserting 5 in vector : "<<v.size()<<endl;
    cout<<"Capacity of vector after inserting 5 in vector : "<<v.capacity()<<endl;

    v.resize(5);
    cout<<endl;
    cout<<"Size of vector after resize the vector to 5 : "<<v.size()<<endl;
    cout<<"Capacity of vector after resize the vector to 5 : "<<v.capacity()<<endl;

    cout<<endl;
    v.pop_back();
    v.pop_back();
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;

}