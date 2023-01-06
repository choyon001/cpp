#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int total = (n*(n+1))/2;
    long long int sum=0;
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
    }
    cout<<total-sum<<endl;

    return 0;
}