#include<bits/stdc++.h>
using namespace std;
int foundIndex(int arr[],int size,int key){
    if(size<=0 && arr[size]!=key) return 0;
    if(arr[size]==key) return size;
    foundIndex(arr,size-1,key);
}
int main(){
    int arr[5]={34,3,23,5,1};
    int size = 4;
    if(foundIndex(arr,size,1))
    cout<<"index = "<<foundIndex(arr,size,1)<<endl;
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}