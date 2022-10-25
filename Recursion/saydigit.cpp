#include<iostream>
using namespace std;
void sayDigit(int n){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int r = n%10;
    if(r==0)return;
    sayDigit(n/10);
    cout<<arr[r]<<" ";
}
int main(){
    sayDigit(348);
    return 0;
}