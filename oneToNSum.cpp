#include<iostream>
using namespace std;
int main(){
    int sum =0;
    int number = 1;
    int n;
    cin>>n;
    while(number<=n){
        sum = sum+number;
        number++;
    }
    cout<<sum<<endl;
    return 0;
}