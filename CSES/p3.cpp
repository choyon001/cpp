#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 1;
    int maxi = 1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            count++;
            maxi= max(count,maxi);
        }
        else{
            count = 1;
        }
    }
    cout<<maxi<<endl;
    
    return 0;
}