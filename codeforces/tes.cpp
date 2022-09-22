#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';


bool isVowel(char a){
    
    return (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='y');
}
string leftRotate(string str, int d) {
    // Write your code here.
    string temp = str.substr(0,d);
    str.erase(str.begin(),str.begin()+d);
    str = str+temp;
    return str;
}
int main(){
    optimize();
    string str = "codingninjas";
    int d=4;
    int n= str.size()-4;
    
    cout<<"sub str: "<<str.substr(3)<<endl;

    
    return 0;
}