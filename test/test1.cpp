#include<iostream>
using namespace std;
bool binarSearch(int *arr,int s,int e,int key){
    int mid= (s+e)/2;
    if(s>e)return false;
    if(arr[mid]==key)return true;
    if(arr[mid]>key)return binarSearch(arr,s,mid-1,key);
    return binarSearch(arr,mid+1,e,key);
}
int main(){
    int arr[5]={2,5,6,8,9};
    int size =5;
    cout<<binarSearch(arr,0,4,0);
    

    return 0;
}