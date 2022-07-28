#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int s=0;
    int e = size -1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s= mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[],int s, int e,int key){
    int start=s;
    int end = e;
    int mid = s+(e-s)/2;
    while(start<end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[5]={3,8,10,17,1};
    int size =5;
    int a = pivot(arr,size);
    cout<<a<<endl;
    int key = 10;
    if(key>=arr[a] && key<=size-1){
        cout<<"pivot number is "<<binarySearch(arr,a,size-1,key)<<endl;
    }
    else{
        cout<<"pivot number is "<<binarySearch(arr,0,a,key)<<endl;
    }
    return 0;
}