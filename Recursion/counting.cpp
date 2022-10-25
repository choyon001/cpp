#include<bits/stdc++.h>
using namespace std;
void counting(int n){
    if(n==0) return ;
    // cout<<n<<" ";
    counting(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter the where from you want to count: "<<endl;
    cin>>n;
    counting(n);
    return 0;
}