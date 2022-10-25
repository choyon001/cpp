#include<bits/stdc++.h>
using namespace std;
int power(int number,int exp){
    if(exp==0)return 1;
    return number*power(number,exp-1);
}
int main(){
    int n,exp;
    cout<<"enter the number and exponent: "<<endl;
    cin>>n>>exp;
    cout<<power(n,exp)<<endl;

    return 0;
}