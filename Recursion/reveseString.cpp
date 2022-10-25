#include<bits/stdc++.h>
using namespace std;

void reverseString(string &s,int i,int j){
    if(i>j) return;
    swap(s[i],s[j]);
    i++;
    j--;
    reverseString(s,i,j);
}
int main(){
    string name="choyon";
    reverseString(name,0,name.length()-1);
    cout<<name<<endl;


    return 0;
}