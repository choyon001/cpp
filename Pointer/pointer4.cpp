#include<iostream>
using namespace std;
int main(){
    int arr[5]={23,23,2,2,3};
    char ch[6]={'a','b','c','d','e','\0'};
    cout<<"address of arr: "<<arr<<endl;
    cout<<"address of ch: "<<ch<<endl;
    int *ptr = &arr[0];
    cout<<"address of 0 based index: "<<ptr<<endl;
    char *ctr = &ch[0];
    cout<<"address of ctr: "<<ctr<<endl;
    return 0;
}