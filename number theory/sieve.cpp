#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    int number;
    cin>>number;
    vector<bool> v(number+1,true);
    v[0]=false;
    v[1]=false;
    int count=0;
    for(int i=2;i<number;i++){
        if(v[i]){
            count++;
            for(int j=i*i;j<number;j+=i){
                v[j]=false;
            }
        }
    }
    cout<<"total prime: "<<count<<endl;
    return 0;
}