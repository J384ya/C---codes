#include<iostream>
using namespace std;
main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;//1234
    int rev=0;//4321
    int Ld;
    while (num>0)
    {
        Ld=num%10;//get Last digit
        rev=rev*10+Ld;//2nd last digit
        num=num/10;//remove second last digit
    }
    cout<<rev;//reverse Number
}
