#include<iostream>
using namespace std;
int main(){
    char ch ;
    cin>>ch;
    if(ch>='a'&& ch<='z'){
        cout<<"small"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"capital"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"numeric"<<endl;
    }
    else{
        cout<<"else"<<endl;
    }

    return 0;
}