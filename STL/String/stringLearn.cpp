#include<bits/stdc++.h>
using namespace std;
bool isRotation(string s1,string s2){
    if(s1.size()!= s2.size())return false;
    string temp = s1+s1;
    return temp.find(s2)!=string::npos;

}
int main(){
    string str1,str2;
    cin>>str1>>str2;
   
    if(isRotation(str1,str2)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}