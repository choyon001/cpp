#include<iostream>
using namespace std;

int setBit(int n){
    int count = 0;
    while(n!=0){
        int bit = (n&1);
        if(bit){
            count++;
        }
        n>>=1;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"Enter your two numbers: "<<endl;
    cin>>a>>b;
    int setBitA = setBit(a);
    int setBitB = setBit(b);
    cout<<"Total set bits = "<<setBitA + setBitB<<endl;

    return 0;
}