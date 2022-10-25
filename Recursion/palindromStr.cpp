#include<iostream>
using namespace std;
bool isPalindrome(string str,int i,int j){
    if(i>j)return true;
    if(str[i]!=str[j]) return false;
    if(str[i]==str[j]){
        i++;
        j--;
    }
     return   isPalindrome(str,i,j);
    
}
int main(){
    string str = "aabccbbaa";
    int n = str.size()-1;
    if(isPalindrome(str,0,n)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindorme"<<endl;
    }
    return 0;
}