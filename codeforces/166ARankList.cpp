#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
bool cmp(pair<int,int> &p1,pair<int,int> &p2){
    if(p1.first>p2.first)return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    return 0;
}
int main(){
    int n,k;
    cin>>n>>k;

    vector <pair<int,int>> v(n) ;
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    int ans = 0;
    for(auto u:v){
        if(u == v[k-1]){
            ans++;
        }
    }
    cout<<ans<<endl;
    
    
    return 0;
}