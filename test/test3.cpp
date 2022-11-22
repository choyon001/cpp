#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void ans(int arr[],int index,int value,int prefix[],int n){
        
        arr[index-1]=value;
        
        prefix[0]=arr[0];
        int maxSum = arr[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
            maxSum = max(prefix[i],maxSum);
        }
        cout<<maxSum<<endl;
}
int main(){
    optimize();
    int n,q;
    cin>>n>>q;
    int arr[n];
    int prefix[n];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
    for(int i=0;i<q;i++){
        int index,value;
        cin>>index>>value;
        ans(arr,index,value, prefix,n);
    }
   
    
    return 0;
}