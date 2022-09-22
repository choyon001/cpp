#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void input(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
}
void rowSum(int arr[3][3]){
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}

void colSum(int arr[3][3]){
    for(int j=0;j<3;j++){
        int sum =0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}

void largestSumwithIndex(int arr[3][3]){
    int maxsum = INT_MIN;
    int index =0;
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j =0;j<3;j++){
            sum += arr[i][j];
            if(sum>maxsum){
                maxsum = sum;
                index =i;
            }
        }
    }
    cout<<"maxSum : "<<maxsum<<endl;
    cout<<"index of maxsum : "<<index<<endl;
}
int main(){
    int arr[3][3];
    input(arr);
    cout<<"row sum: "<<endl;
    rowSum(arr);
    cout<<endl;
    cout<<"col sum: "<<endl;
    colSum(arr);
    cout<<endl;
    largestSumwithIndex(arr);
    cout<<endl;
    return 0;
    }