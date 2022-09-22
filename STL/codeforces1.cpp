#include<bits/stdc++.h>
using namespace std; 
int main(){
    // int n;
    // cin>>n;
    // vector<int> v(n);
    // int turn=1;
    // int s=0;
    // int d =0;
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // while(!v.empty()){
    //     if(turn==1){
    //         if(v.front()>v.back()){
    //             s+=v.front();
    //             v.erase(v.begin());
    //         }
    //         else{
    //             s+=v.back();
    //             v.pop_back();
    //         }
    //         turn=2;
    //     }
    //     else{
    //          if(v.front()>v.back()){
    //             d+=v.front();
    //             v.erase(v.begin());
    //         }
    //         else{
    //             d+=v.back();
    //             v.pop_back();
    //         }
    //         turn =1;
    //     }
    // }

    // cout<<s<<" "<<d<<"\n";

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int start=0;
    int end =n-1;
    int s=0,d=0;
    int turn=1;
    while(start<=end){
        if(turn==1){
            if(v[start]>v[end]){
                s+=v[start];
                start++;
            }
            else{
                s+=v[end];
                end--;
            }
            turn =2;
        }
        else{
            if(v[start]>v[end]){
                d+=v[start];
                start++;
            }
            else{
                d+=v[end];
                end--;
            }
            turn =1;
        }
    }

    cout<<s<<" "<<d<<"\n";
    return 0;
}