#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    m["choyon"]=2;
    m["monjur"]=4;
    m["elahi"]=4;

    for(auto u:m){
        cout<<u.first<<" "<<u.second<<endl;
    }
    

    return 0;
}