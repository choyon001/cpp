#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    optimize();
    int t;
    cin>>t;
    int a,b,c;
    int first ,second;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        first = abs(a-1);
        second = abs(c-b)+abs(c-1);
        if(first>second){
            cout<<2<<endl;
            }
        else if(second>first) {cout<<1<<endl;}
        else{
            cout<<3<<endl;
        }

    }
    return 0;
}