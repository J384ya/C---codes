#include<iostream>
using namespace std;
main()
{
    int age;
    cout<<"Enter Your Age";
    cin>>age;

    if (age<12){
        cout<<"You Are a Child";
    }
    else if (age<18&&age>13){
        cout<<"You are Teenager";
    }
    else{
        cout<<"You are Adult";
    }
    
}
    


