#include<iostream>
using namespace std;
bool palindrome(char ch[],int n){
    int s = 0;
    int end = n -1;
    while(s<=end){
        if(ch[s]!=ch[end]){
            return false;
        }
        else{
            ch[s++];
            ch[end--];
        }
    }
    return true;
}
int getlength(char ch[]){
    int count =0;
    for(int i = 0; ch[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter your name: "<<endl;
    cin>>name;
    cout<<"the length is: "<<getlength(name)<<endl;
    cout<<palindrome(name,getlength(name));
}