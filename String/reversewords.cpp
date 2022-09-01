#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string sentense = "My name is Choyon";
    string ans="";
    string temp="";
    for(int i=0;i<=sentense.length();i++){
        if(sentense[i]==' '){
            ans = ans + temp+" ";
            temp = "";
        }
        else if(sentense[i]=='\0'){
            ans = ans + temp;
        }
        else{
            temp = sentense[i]+temp;
        }
    }
    cout<<ans;

}