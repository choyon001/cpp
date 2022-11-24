#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i = 0;i<tc;i++){
        int n;
        cin>>n;
        string s;
        char ch;
        cin>>ch;
        getline(cin,s);
        s= ch+s;
        int maxi = 0;
        for(auto u:s){
            maxi = max(maxi,u-'a');
        }
        cout<<maxi+1<<endl;
    }

    return 0;
}