#include<bits/stdc++.h>
using namespace std;
int main(){
    tuple<int,char,float> t ={12,'a',12.2};
    array<int,10> arr={1,2,3,4,5,6,7,1,2,3};
    vector<int> v={1,2,3,4};
    cout<<get<1>(t)<<endl;
    // tie function 
    int a;
    float b;
    tie(a,ignore,b)=t;
    cout<<"a= "<<a<<" b= "<<b<<endl;
    // reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+2);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
            }
    cout<<endl;
    v.erase(v.begin(),v.begin()+3);
    for(auto i: v){
        cout<<"i = "<<i<<endl;
    }
    return 0;
}