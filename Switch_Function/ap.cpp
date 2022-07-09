#include<iostream>
using namespace std;
int ap(int a){
    int ap = 3*a +7;
    return ap;
}
int main(){
    int n;
    cout<<"Enter your nth term : "<<endl;
    cin>>n;
    int ari_pro = ap(n);
    cout<<"Your nth term result is: "<<ari_pro<<endl;
    return 0;
}