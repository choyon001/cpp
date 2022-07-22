#include<iostream>
using namespace std;
void reverseAlternate(int arr[],int size){
    if(size%2==0){
        for(int i = 0;i<size;i++){
            if(i%2==0){
                swap(arr[i],arr[i+1]);
                i++;
            }
        }
    }
    else{
        for(int i = 0;i<size-1;i++){
            if(i%2==0){
                swap(arr[i],arr[i+1]);
                i++;
            }
        }
    }
}
void printArr(int arr[],int size){
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[100];
    int arrSize;
    cout<<"Enter the size of array: ";
    cin>>arrSize;
    for(int i = 0;i<arrSize;i++){
        cin>>arr[i];
    }
    reverseAlternate(arr,arrSize);
    printArr(arr,arrSize);
    return 0;
}