#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
        for(int i=n+1;i<=90000;i++){
        set<char> s;

        string str = to_string(i);
        s.insert(str[0]);
        s.insert(str[1]);
        s.insert(str[2]);
        s.insert(str[3]);
        // cout<<"before str = "<<s.size()<<endl;
        if(s.size()==4){
            // cout<<"after str = "<<s.size()<<endl;
            cout<<str<<endl;
            break;
        }
    }
    return 0;
}