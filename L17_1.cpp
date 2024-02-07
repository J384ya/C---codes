// 27_1
// Given two numbers p & q, find the value pAq using a recursive function.
#include<iostream>
using namespace std;
int pow(int q, int p){
    if(p==0) return 1;
    return p*pow(p,q-1);
}
int main(){
    int result = pow(3,4);
    cout<<result;
    return 0;
}

