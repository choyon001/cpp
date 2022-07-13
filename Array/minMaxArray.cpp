#include<iostream>
using namespace std;

int maxNumber(int arr[],int size){
    int max = arr[0];
    for(int i = 0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int minNumber(int arr[],int size){
    int min = arr[0];
    for(int i = 0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int array[100];
    for(int i = 0;i<size; i++){
        cin>>array[i];
    }
    cout<<"Max value in array is: "<<maxNumber(array,size)<<endl;
    cout<<"Min value in array is: "<<minNumber(array,size)<<endl;
    return 0;
}