#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,string> ipName;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string name,ip;
        cin>>name>>ip;
        ipName[ip]=name;
    }
    for(int i=0;i<m;i++){
        string command,ip;
        cin>>command>>ip;
        ip.pop_back();
        cout<<command<<" "<<ip<<"; #"<<ipName[ip]<<endl;
    }

    return 0;
}