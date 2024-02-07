// Introduction to Time Complexity

/*
Time complexity is a programming term that quantifies the amount of time
it takes a sequence of code or an algorithm to process or execute in proportion 
to the size and cost of input. It will not look at an algorithm's overall 
execution time.
*/


// Types of Time Complexity
/*
Worst Case Time Complexity
Best Case Time Complexity
Average Case Time Complexity
*/

// Calculation of Time Complexity


// Introduction to Space Complexity
/*
Space complexity refers to the total amount of memory space used by an algorithm/program,
 including the space of input values for execution. Calculate the space occupied by
  variables in an algorithm/program to determine space complexity.
*/
#include<iostream>
using namespace std;
int main(){
    int sum_in_range;
    int result =0;
    int x=2;
    int y=6;
    cout<<"value of x and y";
    // cin>>x>>y;
    for(int i=x;i<=y;i++){
        result+=i;
    }
    cout<<"Result :"<<result;
}