#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int mid = start+(end-start)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
         mid = start+(end-start)/2;
    }
    return -1;
}

int main(){
    int odd[5]={9,12,13,34,44};
    int even[6]={1,2,3,5,21,23};
    int index = binarySearch(odd,5,13);
    int indexEven = binarySearch(even,6,13);
    cout<<"index of 55 is "<<index<<endl;
    cout<<"index of 13 is "<<indexEven<<endl;


    return 0;
}