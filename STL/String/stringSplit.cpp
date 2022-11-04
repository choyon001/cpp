#include<bits/stdc++.h>
using namespace std;

void splitStr(string str){
    vector<string> v;
    string tmp;
    for(auto u:str){
        if(isspace(u)){
            v.push_back(tmp);
            tmp = "";
        }
        else{
            tmp+=u;
        }
    }
    
    map<string,int> m;
    for(auto u:v){
        m[u]++;
    }
    int maxfrq=0;
    for(auto u:m){
        maxfrq = max(maxfrq,u.second);
    }
    string ans;
    for(auto u:v){
        if(m[u]==maxfrq){
            ans = u+" " + to_string( maxfrq);
        }
    }
    cout<<ans;
}
int main(){
    string str = "the devil in the sky";
    splitStr(str);
    cout<<endl;

    return 0;
}