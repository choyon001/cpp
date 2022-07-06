#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" "; 
    for(int i=1;i<=num-2;i++ ){
        int next = a +b;
        cout<<next<<" ";
        a=b;
        b = next;
    }
    return 0;
}