#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{23,3,23,11,44};
    vector<int> newvector{23,23,1,44,42};
    sort(v.begin(),v.end());
    for(auto u:v)cout<<u<<" "<<endl;
    sort(newvector.begin(),newvector.end());

    return 0;
}