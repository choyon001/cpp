#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> arr;
    arr.at(0)=0;
    arr.at(1)=1;
    arr.at(2)=2;
    arr.at(3)=3;
    arr.at(4)=5;
    for(int i = 0;i<arr.size();i++){
        cout<<"array "<<i+1<<" of "<<arr[i]<<endl;
    }
    cout<<"front: "<<arr.front()<<endl;
    cout<<"End: "<<arr.back()<<endl;
    return 0;
}