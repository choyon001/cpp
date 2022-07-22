#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 0;
    int ans = 0;
    while(n!=0){
        int digit = n %10;
        // cout<<"digit: "<<digit<<endl;
        ans = (ans *10)+digit;
        // cout<<"answer = "<<ans<<endl;
        
        n = n/10;
        
    }
    cout<<"answer= "<<ans;
    return 0 ;
}