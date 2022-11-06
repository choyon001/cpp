#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    vector<int> v ={3,23,4,4,34,232,12,43,53,3};
    sort(v.begin(),v.end());
    int size = v.size();
    int vPtr = unique(v.begin(),v.end()) - v.begin() ;
    for(int i=0;i<vPtr;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}