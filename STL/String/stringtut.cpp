#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    optimize();
    // string name = "helloaaab";
    // string number = "123";
    // int digit = 45;
    // char c = 'a';
    // bool isuppertrue = isupper(c);
    // cout<<"is upper: "<<isuppertrue<<endl;
    // string name2 = "olo";
    // reverse(name.begin(),name.end());
    // name.erase(name.begin(),name.begin()+3);
    // sort(name.begin(),name.end());
    // cout<<name<<endl;
    // if(name>name2){
    //     cout<<"small"<<endl;
    // }
    // else{
    //     cout<<"not small"<<endl;
    // }
    // int a = unique(name.begin(),name.end()) - name.begin();
    // cout<<"number: "<<a<<" and name: "<<name<<endl;
    // cout<<"number string is : "<<number<<endl;
    // int num = stoi(number);
    // cout<<"number : "<<++num<<endl;
    // cout<<"digit is "<<digit<<endl;
    // string intostring = to_string(digit);
    // cout<<"digit in string "<< intostring<<endl;
    // string name = "shahrir";
    // int a = name.find("talha");
    // cout<<"sub string : "<<name.substr(2,6)<<endl;
    // if(name.find("ri") != -1){
    //     cout<<" found"<<endl;
    // }
    // else{
    //     cout<<"not  found "<<endl;
    // }
    string str = "aacdeofaabcc";
    str.erase( remove(str.begin(),str.end(),'a'),str.end());
    cout<<"after remove a : "<<str<<endl;

    return 0;
}