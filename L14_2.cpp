//          find last and first index of string 
#include<iostream>
using namespace std;
void findFirstAndLastIndex(string s,char ch,int *f,int *l){
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
        *f=i;
        break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if (s[i]==ch)
        {
        *l=i;
        break;
        }
    }
}
int main (){
    string s ="abababbhaads";
    char ch ='a';
    int f=-1;
    int l=-1;
    int *pf=&f;
    int *pl=&l;
    findFirstAndLastIndex(s,ch,pf,pl);
    cout<<"First index of a is : "<<*pf<<endl;
    cout<<"Last index of a is : "<<*pl<<endl;
}