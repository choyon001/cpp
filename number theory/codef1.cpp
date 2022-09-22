#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int > v{53,20,6,1};
    // cout<<* v.cbegin()<<endl;
    // cout<<* (v.cend()-1) <<endl;
    cout<<v.empty()<<endl;
    cout<<v.at(2)<<endl;
    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<v.at(2)<<endl;
    v.erase(v.begin(),v.end());
    for(auto u :v){
        cout<<u<<" ";
    }
    cout<<endl;
    cout<<v[2]<<endl;
    cout<<v.size()<<endl;
    return 0;
}