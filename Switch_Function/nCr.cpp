#include<iostream>
using namespace std;
int fact(int n){
    int f = 1;
    for(int i = 1; i<=n; i++){
        f = f*i;
    }
    return f;
}

int nCr(int n,int r){
    int num =fact(n);
    // cout<<"Num = "<<num<<endl;
    int denom = fact(r) * fact(n-r);
    // cout<<"Denom = "<<denom<<endl;
    return num/denom; 
}

int main(){
    int a ,b;
    cin>>a>>b;
    cout<<"nCr = : "<<nCr(a,b);
    return 0;
}