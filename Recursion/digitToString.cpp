#include<bits/stdc++.h>
using namespace std;
// #define optimize() ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl '\n';


void digitToString(int n,string arr[]){
    if(n==0) return;
    int digit = n%10;
    n = n/10;
    cout<<arr[digit]<<" ";
    digitToString(n,arr);
    
}
int main(){
    // optimize();
    int n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
   
    cout<<"enter your number: "<<endl;
    cin>>n;
    
    cout<<endl;
    digitToString(n,arr);



}