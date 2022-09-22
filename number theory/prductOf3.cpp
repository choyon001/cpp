#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c=1;
        int n;
        int temp;
        cin>>n;
        temp=n;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){

                a=i;
                break;
            }
        }
        n=n/a;
        for(int i=2;i*i<=n;i++){
            if(n%i == 0 && i>a){
                b=i;
                break;
            }
        }
        c=n/b;
        if(a<b && b<c && c!=1 && (a*b*c==temp) ){
            cout<<"YES\n";
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}