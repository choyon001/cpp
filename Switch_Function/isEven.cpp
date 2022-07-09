#include<iostream>
using namespace std;

bool isEven(int a){
    if(a&1){
        return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool isTrue = isEven(n);
    cout<<n<<" is prime? ans: "<<isTrue;
    return 0;
}