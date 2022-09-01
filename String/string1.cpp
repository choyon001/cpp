#include<iostream>
using namespace std;
int getlength(char name[]){
    int count = 0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverseName(char name[],int length){
    int s=0;
    int e=length-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
char toLower(char ch){
    if(ch>='a' && ch<='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}
bool checkPalindrome(char name[],int length){
    int start = 0;
    int end = length -1;
    while(start<=end){
        if(toLower(name[start])!=toLower(name[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

int main(){
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    int len = getlength(name);
    cout<<"length of your name is: "<<len<<endl;
    reverseName(name,len);
    cout<<"reverse: "<< name<<endl;
    cout<<"is palindrome? : "<<checkPalindrome(name,len)<<endl;


 return 0;
}