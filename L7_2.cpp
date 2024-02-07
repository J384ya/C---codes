#include<iostream>
using namespace std;
// find the sum of digits in a given Number n
int main()
{
    int n;//Entered Number 1234
    cout<<"Enter Any Number: ";
    cin>>n;
    int lastdigit;
    int sum=0;//sum of given input
    while (n>0)
    {
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    cout<<sum;
}


