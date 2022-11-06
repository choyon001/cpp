#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++){
         map<pair<int,int>,bool> mp;
        int n,r;
        cin>>n>>r;
        bool flag=1;
        for(int i=0;i<r;i++){
            int a,b;
            cin>>a>>b;
            if(mp[{a,b}]){
                flag=0;
            }
            mp[{a,b}]=1;
        }
        if(flag==1){
            cout<<"Scenario #"<<i<<": possible"<<endl;
        }
        else{
            cout<<"Scenario #"<<i<<": impossible"<<endl;
        }
    }

    return 0;
}