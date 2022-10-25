#include<iostream>
using namespace std;
int sum(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[5]={23,2,4,3,5};
    cout<<"the sum from second index: "<<sum(arr+1,4);
    return 0;
}