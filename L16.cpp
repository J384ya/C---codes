    // Introduction to recursive functions
        // we break down bigger problem into small problems
        // Untill we find solution 
        // function call it self call recursion

    // For Example:-
            // A child couldn't sleep, so her mother tolda story about a tittle frog,
            // who couldn't sleep, so the little frog's
            // mother told a story about a little bear,
            // who couldn't sleep, so the little bear's mother told a story about a little weasel
            // — who felt asleep;
            // and the tittle bear felt asleep;
            // and the little frog fell asleep;
            // and the child fell asleep.


        // for better understanding we need to understand a 
        // IMP topic which is principle of mathamatical induction 
            // its a proving machenize to proove mathamatical formulas
//             # Base Case   - alredy known value 
//             # Assumpstion  - we assume a value k for the formula works
//             # Self Work - if the formula works for k+1 so its works so on....

    // Working rules of recursive functions
        //int f(int n){           Bigger problem
        //if(n==1) return 1;
        //int ans = n*f(n-1);     Small problem ( Base Case)
        // return ans;            Assumtion & Self Work
        // }


    // Problems based on recursion

#include<iostream>
using namespace std;
int f(int n){
    // base case 

    if(n==1) return 1;
    int ans = n*f(n-1);
    return ans;

}
int main(){
    int a;
    cout<<"Enter Any Number For Factorial: "<<endl;
    cin>>a;
    int result= f(a);
    cout<<result;
}