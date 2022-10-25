#include<bits/stdc++.h>
using namespace std;
void sortNegative(int arr[],int n){
    int j = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j){
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={-1,3,5,-3,5,3};
    sortNegative(arr,6);
    printArray(arr,6);

    return 0;
}