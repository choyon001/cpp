#include<iostream>
using namespace std;
#include "Copy.cpp"
int main(){
    Copy suresh(20,40) ;
    suresh.print();
    Copy ramesh (suresh);
    ramesh.print();
}