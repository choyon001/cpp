#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    // int number=3;
    // int number2 =5;
    // int *ptr=&number2;
    // cout<<"number = "<<number<<endl;
    // cout<<"address of number: "<<&number<<endl;
    // cout<<"address of number2: "<<&number2<<endl;
    // cout<<"address of number2 using ptr "<<ptr<<endl;
    // cout<<"number2 using ptr "<<*ptr<<endl;
    // int number2=number;
    // number2++;
    // cout<<number<<endl;
    // int *ptr = &number;
    // cout<<"before ++: NUmber is : "<<number<<endl;
    // cout<<"before ptr is : "<<ptr<<endl;
    // // (ptr)++;
    // (*ptr)++;
    // cout<<"ptr   is : "<<ptr<<endl;
    // cout<<"After ++: number is : "<<number<<endl;
    int number = 5;
    int *ptr = &number;
    int *qtr = ptr;
    // int **qtr = &ptr;
    cout<<"ptr= "<<ptr<<" qtr= "<<qtr<<endl;
    cout<<"value of ptr= "<<*ptr<<" value of  qtr= "<<*qtr<<endl;

    int num=5;
    cout<<num++<<endl;//5
    cout<<++num<<endl;//7
    return 0;
}