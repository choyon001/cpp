#include<bits/stdc++.h>
using namespace std;
int sumOffactors(int n){
    int sum =0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
            if((n/i)!=i){
                sum+=n/i;
            }
        }
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter your number below: "<<endl;
    cin>>n;
    cout<<"The sum of factor is: ";
    cout<<sumOffactors(n)<<endl;
    return 0;
}