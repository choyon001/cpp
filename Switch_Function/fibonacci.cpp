#include<iostream>
using namespace std;

int fibonacci(int a){
    int first = -1;
    int second = 1;
    int fib = 0;
    for(int i=1;i<=a;i++){
         fib = first +second;
         first = second;
         second = fib;
    }
    return fib;
}

int main(){
    int n;
    cin>>n;
    int  fibo = fibonacci(n);
    cout<<"Result " <<fibo<<endl;
    return 0;
}