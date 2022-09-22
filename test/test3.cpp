#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = { 1, 1, 2, 2, 2, 3, 3 };
    // unique( a.begin(), a.end() );
    // for(int i:a){
    //     cout<<i<<" ";
    // }
    cout<<"max "<<max_element(a.begin(),a.end())-(a.begin()+1)<<endl;
    cout<<"max value : "<<*max_element(a.begin(),a.end())<<endl;
    return 0;
}