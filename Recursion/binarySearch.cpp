#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int start,int end){
    for(int i=start;i<=end;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
bool binarySearch(int arr[],int s,int e,int key){
 //base case and not found
 print(arr,s,e);
 if(s>e) return false;
    // divide into half 
int mid = s+(e-s)/2;
// founding base case
if(arr[mid]==key) return true;
// if mid stand in left part
if(arr[mid]<key) return binarySearch(arr,mid+1,e,key);
// if mid stand right part
return binarySearch(arr,s,mid-1,key); 
}

int main(){
    int arr[6]={12,33,45,66,67,77};
    int size = 6;
    if(binarySearch(arr,0,5,77)) cout<<"found!"<<endl;
    else cout<<"not found!"<<endl;


    return 0;
}