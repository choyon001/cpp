#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,11,43,2};
    cout<<"address using arr: "<<arr<<endl;
    cout<<"value of 0 th index: "<<0[arr]<<endl;
    for(int i=0;i<5;i++){
        
    cout<<"value using arr pointer: "<<i+1<<" th index: "<<*(arr+i)<<endl;
    }
    return 0;
}