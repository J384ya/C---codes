#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter Number";
    cin>>num;
    if (num>80){
        cout<<"A+"<<endl;
    }
    else if (num>33)
    {
        cout<<"D";
    }
    else{
        cout<<"fail";
    }
    // Ternary Operator (it will write your if else in one line )
    num>33 ? cout<<"pass"<<endl : cout<<"fail"<<endl;
}
