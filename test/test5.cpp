#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    
    for(int i=0;i<tc;i++){
        int students;
        vector<char> names;
        cin>>students;
        for(int i=0;i<students;i++){
            string name;
            char ch;
            cin>>ch;
            getline(cin,name);
            name=ch+name;
            names.push_back(name[0]);
        }
        sort(names.begin(),names.end());
        map<char,int> m;
        for(auto u:names){
            m[u]++;
        }
        // int size = m.size();
        bool flag = false;
        for(auto u:m){
            if(u.second >=3){
                cout<<u.first<<endl;
                flag = true;
            }

            
        }
        if(flag == false)cout<<"impossible"<<endl;

    }

    return 0;
}