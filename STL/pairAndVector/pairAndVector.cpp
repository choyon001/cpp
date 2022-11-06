#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();
    // pair<string,vector<int>> p;
    // p.first = "shahriar";
    // p.second =  {23,3,2};
    // cout<<p.first<<endl;
    // for(auto u:p.second){
    //     cout<<u<<" ";
    // }
    // cout<<endl;

    // int arr[5]={4,2,2,3,5};
    // for(auto a: arr){
    //     cout<<a<<" ";
    // }
    pair<int,int> p1,p2;
    p1={3,43};
    p2={2,45};
    // (p1>p2)?cout<<"p1 is greater":cout<<"not greater";
    
    
    
    // pair<int,int> p = min(p1,p2);
    // cout<<p.first<<" "<<p.second<<endl;
// ****************** vector of pair*************
    // vector<pair<int,int>> v;
    // v.push_back({2,3});
    // v.push_back({4,3});
    // v.push_back({1,5});
    // sort(v.begin(),v.end());
    // for(auto u:v)cout<<u.first<<" "<<u.second<<endl;
    // cout<<endl;

    pair<int,int> v[] = {{3,4},{2,3},{2,4}};
    sort(v,v+3);
    for(int i=0;i<3;i++)cout<<v[i].first<<" "<<v[i].second<<endl;
}