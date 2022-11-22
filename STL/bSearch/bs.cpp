#include<bits/stdc++.h>

using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    // vector<int> v={3,4,4,4,5,12,34,44};
    // int a= binary_search(v.begin(),v.end(),44);// return true or false

    // cout<<a<<endl;
    // int low = lower_bound(v.begin(),v.end(),4)-v.begin();
    // cout<<"lower bound "<<low<<endl;

    // int high = upper_bound(v.begin(),v.end(),4)- v.begin();
    // cout<<"upper bound "<<high<<endl;
    // return 0;
    optimize();
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v[i]=e;
    }
    for(int i=0;i<q;i++){
        int key;
        cin>>key;
        int low = lower_bound(v.begin(),v.end(),key)-v.begin();
        if(v[low]==key){
            cout<<low<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;   
}