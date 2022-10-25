#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int sumarr(int arr[],int size){
    if(size<=0) return 0;
    return sumarr(arr,size-1)+arr[size-1];

}

int main(){
    int arr[5]={2,5,2,1,6};
    int size = 5;
    // int index=0;
    int ans = sumarr(arr,size);
    cout<<"sum= "<<ans<<endl;
    return 0;
}