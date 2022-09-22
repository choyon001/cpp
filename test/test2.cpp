#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a ={5,2,6,1,0,7};
    // sort(a.begin(),a.end(),greater<int>());
    // for(int b:a){
    //     cout<<b<<" ";
    // }
    // reverse(a.begin(),a.end());
    sort(a.rbegin(),a.rend());
    cout<<"back"<<endl;
    // sort(a.rend(),a.rbegin());
    cout<<a.back()<<endl;
    cout<<"unique "<<endl;
    unique(a.begin(),a.end());
    for(int b:a){
        cout<<b<<" ";
    }
    return 0;
}