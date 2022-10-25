#include<iostream>
using namespace std;
void print(int *p){
    cout<<"address of p is : "<<p<<endl;
    cout<<"value of p is : "<<*p<<endl;
}
int main(){
    int num=5;
    int *ptr=&num;
    print(ptr);
    return 0;
}