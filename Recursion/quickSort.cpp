#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    // place the element into right index 
    int PivotIndex = s + count;
    swap(arr[PivotIndex],arr[s]);
    int i = s;
    int j = e;
    while(i <PivotIndex && j>PivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i <PivotIndex && j>PivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return PivotIndex;
}
void quickSort(int arr[],int s,int e){
    // base case 
    if(s>=e) return;
    // make partition index
    int p = partition(arr,s,e);
    // recursion to left part 
    quickSort(arr,s,p-1);
    // recursion to right part
    quickSort(arr,p+1,e);
}

int main(){
    int arr[6] = {3,5,1,8,2,4};
    int size = 6;
    quickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}