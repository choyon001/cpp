#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s ;
    multiset <int> ms={2,3,4,5,1,2,55,3,2};
    s.insert(22);
    s.insert(33);
    s.insert(12);
    s.insert(44);
    

   cout<<"is count: "<< s.count(22)<<endl;
   s.erase(s.begin());
    for(auto u: s) cout<<" "<<u<<endl;
    cout<<"Multiset: "<<endl;
    for(auto u: ms )cout<<" "<<u;
    cout<<endl;
    cout<<"count: "<<ms.count(2);
    return 0;
}