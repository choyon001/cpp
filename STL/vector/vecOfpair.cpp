#include<bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,int>> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<' '<< v[i].second<<endl;
    }
    cout<<endl;
}

int main(){
    vector<pair<int,int>> v;
//    v.push_back({3,4});
//    v.push_back({5,6});
//    v.push_back({3,4});
for(int i=0;i<5;i++){
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
}
    printVec(v);

    return 0;
}