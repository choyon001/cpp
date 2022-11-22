#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize()
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        string mystr = "Yes";
        string str;
        char ch ;
        cin>>ch;
        getline(cin,str);
        str = ch+str;
        int size = str.length();
        bool flag = true;
        if(str[0]==mystr[0]){
            
            for(int i=0;i<size;i++){
                if(mystr[i%3]!=str[i]){
                    flag = false;
                }
            }
        }
        // second index condition
        else if(str[0]==mystr[1]){
            
            for(int i=1;i<size+1;i++){
                if(mystr[i%3]!=str[i-1]){
                    flag = false;
                }
            }
        }

        // third index condition
        else if(str[0]==mystr[2]){
            
            for(int i=2;i<size+2;i++){
                if(mystr[i%3]!=str[i-2]){
                    flag = false;
                }
            }
        }

        else{
            flag = false;
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}