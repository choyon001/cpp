#include<iostream>
using namespace std;
int firstIndex(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int middle = start+((end - start)/2);
    int ans = -1;
    while(start<=end){
        if(arr[middle]==key){
            ans = middle;
            end = middle -1;
        }
        else if(arr[middle]<key){
            start = middle +1;
        }
        else{
            end = middle -1;
        }
        middle = start+((end - start)/2);
    }
    return ans;
}

// last index
int lastIndex(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int middle = start+((end - start)/2);
    int ans = -1;
    while(start<=end){
        if(arr[middle]==key){
            ans = middle;
            start = middle +1;
        }
        else if(arr[middle]<key){
            start = middle +1;
        }
        else{
            end = middle -1;
        }
        middle = start+((end - start)/2);
    }
    return ans;
}

int main(){
    int oddArr[7]={1,2,3,3,3,3,5};
    int fIndex = firstIndex(oddArr,7,3);
    int lIndex = lastIndex(oddArr,7,3);
    int result = lIndex-fIndex+1;
    cout<<"total occurence is : "<<result<<endl;

    return 0;
}