#include<iostream>
using namespace std;

bool isPrime(int a){
    for(int i = 2; i<a ;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Number is prime"<<endl;
    }
    else{
        cout<<"Number is not prime"<<endl;
    }
}