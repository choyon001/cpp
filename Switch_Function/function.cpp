#include<iostream>
using namespace std;

int power(int n1,int n2){
    int ans = 1;
    for(int i = 1 ; i<=n2;i++){
        ans = ans*n1;
    }
    return ans;
}
int main(){
    int a , b;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<"Answer is : "<<ans<<endl;
    return 0;
}