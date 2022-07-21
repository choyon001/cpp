#include<iostream>
using namespace std;
int firstIndex(int arr[],int size,int key){
    int ans = -1;
    int start = 0;
    int end = size -1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int main(){
    int even[6]={1,2,2,4,5,6};
    int a = firstIndex(even,6,2);
    cout<<"first index: "<<a<<endl;
    return 0;
}