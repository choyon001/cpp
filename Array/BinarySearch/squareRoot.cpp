#include<iostream>
using namespace std;
int binOfNumber(int n){
    int start = 0;
    int end = n;
    int ans = -1;
    int mid = start+(end - start)/2;
    while(start<=end){
        int square = mid *mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = start +(end - start)/2;
    }
    return ans;
}

double actualRoot(int n,int decimalPlace,int tempRoot){
    double ans = tempRoot;
    double factor = 1;
    for(int i = 0;i<decimalPlace;i++){
        factor = factor/10;
        for(double j = ans;j*j<n;j+=factor){
            ans = j;
        }
    }
    return ans;

}

int main(){
    int n;
    cout<<"Enter the number that you want to root "<<endl;
    cin>>n;
    int intPart = binOfNumber(n);
    cout<<"Root is: "<<actualRoot(n,3,intPart);
    return 0;
}