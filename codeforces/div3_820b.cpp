#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    char a = 'c';
    int b = a+1 - 'a';
    cout<<"n= "<<b<<endl;
    char c = b+'a'-1;
    cout<<"char "<<c<<endl;
    // string name = "thank you ";
    string name = "315045";
    int na = name.find("0");
    cout<<"find: "<<na<<endl;
    name.erase(na-2,3);
    cout<<"name: "<<name<<endl;
    return 0;
}