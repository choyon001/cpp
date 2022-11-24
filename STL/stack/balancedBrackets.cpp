#include<bits/stdc++.h>
using namespace std;
bool isBalanced(char ch1,char ch2){
    return (ch1=='(' && ch2==')' )|| (ch1=='{' && ch2=='}' )||(ch1=='[' && ch2==']' );
}
int main(){
    string str;
    getline(cin,str);
    stack<char> stk;
    bool done = 1;
    for(auto u:str){
        if(u=='('||u=='{'||u=='['){
            stk.push(u);
        }
        else{
            if(stk.empty()){
                done = 0;
                break;
            }
            else{
                if(isBalanced(stk.top(),u)){
                    stk.pop();
                }
                else{
                    done = 0;
                    break;
                }
            }
        }
    }
    if(!stk.empty()){
        done = 0;
    }
    if(done){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }

    return 0;
}