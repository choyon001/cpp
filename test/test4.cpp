#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();
    int count[26]={0};
    string name1,name2;
    getline(cin,name1);
    getline(cin,name2);
    transform(name1.begin(),name1.end(),name1.begin(),::tolower);
    transform(name2.begin(),name2.end(),name2.begin(),::tolower);

    for(int i=0;i<name1.size();i++){
        count[name1[i]-'a']++;
    }
    for(int i=0;i<name2.size();i++){
        count[name2[i]-'a']++;
    }

    string digitstr="";

    for(int i=0;i<name1.size();i++){
        if(count[name1[i]-'a']>0){
            digitstr+=to_string(count[name1[i]-'a']);
            count[name1[i]-'a']=-1;
        }
        
    }
    for(int i=0;i<name2.size();i++){
         if(count[name2[i]-'a']>0){
            // cout<<count[name2[i]-'a']<< " "<<name2[i]<<endl;
            digitstr+=to_string(count[name2[i]-'a']);
            count[name2[i]-'a']=-1;
        }
    }
    cout<<digitstr<<endl;

    return 0;
}