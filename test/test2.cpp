#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();
    int n,q;
    cin>>n>>q;
    int arr[n];
    pair<int,int> p[q];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
    // taking input using pair
    for(int i=0;i<q;i++){
        int index,value;
        cin>>index>>value;
        p[i].first = index;
        p[i].second = value; 
    }

    // using pair
    for(int i=0;i<q;i++){
        arr[p[i].first -1]= p[i].second; 
        int prefix[n];
        prefix[0]=arr[0];
        int maxSum = arr[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
            maxSum = max(prefix[i],maxSum);
        }
        cout<<maxSum<<endl;
    }

    
    return 0;
}