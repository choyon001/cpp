#include<iostream>
using namespace std;
void selectionSort(int *arr,int size){
    if(size==0 || size ==1)return ;
    int minIndex = 0;
    for(int i=0;i<size;i++){
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
    }
    swap(arr[0],arr[minIndex]);
    selectionSort(arr+1,size-1);
}
int main(){
    int arr[6]={64,25,12,22,11,12};
    int size = 6;
    selectionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}