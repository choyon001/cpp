#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    string s;
    char ch;
    cin>>ch;
    getline(cin,s);
    s=ch+s;
    for(int i=0;i<d;i++){
        for(int i=0;i<n-1;i++){
        if(s[i]=='B' && s[i+1]=='G'){
            swap(s[i],s[i+1]);
            i++;
            // i+=d;
        }
    }
    }
    cout<<s<<endl;
    return 0;
}