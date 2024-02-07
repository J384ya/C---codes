//    Call-by-reference using pointers
//    Swap of two no. with use of ponters 
#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    *x=temp;
    *y=*x;
    temp=*y;

}
int main (){
    int x=20;
    int y=10;
    
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}