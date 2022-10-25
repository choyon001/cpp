#include<bits/stdc++.h>
using namespace std;
void prefixArrSum(int arr[],int size,int prefixSum[]){
    prefixSum[0]=arr[0];
    for(int i=1;i<size;i++){
        prefixSum[i]=prefixSum[i-1]+arr[i];
    }
}
int sumOfSubArray(int arr[],int size){
    int n = size;
    int prefixArr[n]={0};
    prefixArrSum(arr,n,prefixArr);
    int sum=0;
    int result = 0;
    for(int i=0;i<size;i++){
        sum=0;
        for(int j = i;j<size;j++){
            if(i!=0){
                sum = prefixArr[j] - prefixArr[i-1];
            }
            else{
                sum=prefixArr[j];
            }
            result+=sum;
        }
    }
    return result;
}
int main(){
    int arr[4]={1,2,3,4};
    int n = 4;
    int ans=sumOfSubArray(arr,n);
    cout<<"the answer of sub array is : "<<ans<<endl;
    


    return 0;
}