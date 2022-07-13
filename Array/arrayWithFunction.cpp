#include<iostream>
using namespace std;
void printAry(int ary[],int size){
    for(int i=0;i<size;i++){
        cout<<i<<" = "<<ary[i]<<endl;
    }
}

int main(){
    int fourth[10]= {3,5};
    printAry(fourth,10);
    cout<<"size: "<<sizeof(fourth)/4<<endl;

    return 0;
}