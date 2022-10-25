#include<bits/stdc++.h>
using namespace std;
#define optimize();ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

bool isSorted(int arr[],int size){
    if(size==0 || size==1) return true;
    if (arr[0]>arr[1]) return false;
    return isSorted(arr+1,size-1);
}
int main(){
    int arr[5]={1,4,4,4,8};
    int size = 5;
    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
    return 0;
}