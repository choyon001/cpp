#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define vi vector<int>
#define pi pair<int,int>
#define fs first
#define sc second
#define add(a,b) a+b
int main(){
    optimize();
    pi p ={1,2};
    cout<<p.fs<<" "<<p.sc<<endl;
    vi v(10,10);
    for(auto i : v) cout<<i<<" ";
    cout<<endl;
    cout<<add(4,5);
    cout<<"comparing .. "<<(p>make_pair(1,1))<<endl;

    cout<<"is equal: "<<(make_pair(1,2)==make_pair(2,3))<<endl;
    return 0;
}