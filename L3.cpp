// Arthmetic Operators
/*
Addition +
Subtaction -
Multipilication *
Division /
Modulus % (remeder)
Increment ++ 
Decrement -- 
*/



// Relational Operators
/*
Equal to: ==
Not Equal to: !
Greater Then: >
Greater Then or Equals to: =>
Less then: <
Less then or Equals to: =<
*/



// Logical Operators
/*
Logical AND: &&
Logical OR:  ||
Logical NOT: !
*/


// Assignment Operator
/*
=  a=b
+= a+1=a
-= a-1=a
/= a/2=a
%= a%2=a
*/


// Bit wise Opereator 
/*
bitwise Complement  ~ 
Left Shift    <<
Right Shift   >>
Bitwise OR   |
Bitwise AND  &
Bitwise Exclusive OR  ^
*/



// Misc Opereator
/*
Sizeof operator
Condition ? Expression1(if true) : Expression2(if false) 
Comma operator (last value consider)
dot & arrow oprator    
casting operator 
& Address Operator 
* Pointer Operator 
*/



// Unary Operation 
/*
unary Incriment +
unary Deriment - 
Incrimental ++
Derimental --
Logical Operator !


pre ++a   and post a++

*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;//a=100,b=23
    cout<<"Enter Value Of A: "<<endl;
    cin>>a;
    cout<<"Enter Value Of B: "<<endl;
    cin>>b;

    cout<<"Addition = "<<a+b<<endl;//123
    cout<<"Subtaction = "<<a-b<<endl;//77
    cout<<"Multipilication = "<<a*b<<endl;//2300
    cout<<"Division = "<<a/b<<endl;//4
    cout<<"Modulus = "<<a%b<<endl;//8
    cout<<endl;
    cout<<endl;
    
    a++;
    cout<<"Increment of a = "<<a<<endl;//101
    b++;
    cout<<"Increment of b = "<<b<<endl;//24
    a--;
    cout<<"Decrement of a = "<<a<<endl;//99
    b--;
    cout<<"Decrement of b = "<<b<<endl;//22
    cout<<endl;
    cout<<endl;

    cout<<(a==b)<<endl;//0
    cout<<(a>=b)<<endl;//1
    cout<<(a<=b)<<endl;//0
    
    a+=3;
    cout<<a<<endl;//103
    b-=2;
    cout<<b<<endl;//21


cout<<"bitwise";
    cout<<(a<<1)<<endl;
    cout<<(a>>1)<<endl;
    cout<<(a&b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(a|b)<<endl;


    cout<<sizeof(a)<<endl;




    return 0;
}
