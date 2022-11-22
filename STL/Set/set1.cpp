#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s={3,4,3,23,4,3,2,1};
    cout<<s.size()<<endl;
    set<int> ::iterator it;
    for(it=s.begin();it!=s.end();it++){ 
        cout<<*it<<" ";
    }
    s.clear();
    cout<<"is empty: "<<s.empty()<<endl;
    cout<<("abc"<"bcd");

    return 0;
}