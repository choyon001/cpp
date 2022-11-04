#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> id;
    cout<<"Enter the size:"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        int d;
        cin>>s>>d;
        id[s]=d;
    }

    // print the key and value of map
    for(auto u:id){
        cout<<u.first<<" "<<u.second<<endl;
    }


    return 0;
}