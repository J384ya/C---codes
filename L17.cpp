// 27 
// Given an integer, find out the sum of its digits using recursion
#include<iostream>
using namespace std;
int fun(int n){
    if(n<=9||n>=0) return n;
    return fun(n/10) + (n%10);
}
int main (){
    int result = fun(1234);
    cout<<result;
    return 0;
}