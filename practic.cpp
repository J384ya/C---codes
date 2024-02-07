// Find the total number of pairs in the
// Array whose sum is equal to the given
// value x.
#include<iostream>
using namespace std;
int main(){
    int array[]{3,4,6,7,1};
    int TSum=7;
    int size=5;
    int pair=0;
    for(int i = 0;i<=size;i++){
        for(int j=i+1;j<=size;j++){
            if (array[i] +array[j]==TSum)
            {
                pair ++;
            }
        }
    }
    cout<<pair<<endl;
}