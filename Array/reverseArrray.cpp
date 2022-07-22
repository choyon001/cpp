#include<iostream>
// #include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int size){
    int start = 0;
    int end = size - 1;
    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}
void printReverse(int arr2[] , int size2){
    for(int i = 0; i<size2;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    for(int i=0;i <size;i++){
        cout<<"Enter the index of "<<i<<" th array : ";
        cin>>arr[i];
    }
    reverseArray(arr,size);
    printReverse(arr,size);

    return 0;
}