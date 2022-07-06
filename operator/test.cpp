#include<iostream>
using namespace std;
int main(){
    int a =1 , b = 2;
    
    if(a-- >0 && ++b>2){
        cout<<"stage-1";

    }
    else{
        cout<<"stage-2";
    }
    cout<<a<<" "<<b <<endl;
    return 0;
}