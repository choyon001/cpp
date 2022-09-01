#include<iostream>
using namespace std;
void merge(int arr1[],int arr2[],int arr3[],int size1,int size2){
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<size1){
        arr3[k++]=arr1[i++];
    }
    
    while(j<size2){
        arr3[k++]=arr2[j++];
    }
}

void print(int arr3[],int size3){
    for(int i=0;i<size3;i++)
        cout<<arr3[i]<<" "; 
}
int main(){
    int arr1[3]={1,3,5};
    int arr2[5]={2,4,6,7,8};
    int arr3[8]={0};
    merge(arr1,arr2,arr3,3,5);
    print(arr3,8);
    
}