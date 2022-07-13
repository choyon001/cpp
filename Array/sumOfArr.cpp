#include<iostream>
using namespace std;
int sumOfNumbers(int arr[],int size){
    int sum = 0;
    for(int i = 0; i <size; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int arrays[100];
    int arr_Size;
    cout<<"Enter the size of array: ";
    cin>>arr_Size;
    cout<<"Enter the numbers: "<<endl;
    for( int i= 0 ;i<arr_Size;i++){
        cin>>arrays[i];
    }
    cout<<"Sum of numbers "<<sumOfNumbers(arrays,arr_Size);
    return 0;
}