#include<iostream>
using namespace std;
int main(){
    int arr[3][4];

    // Row wise input

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }



    // col wise input
    for(int col=0;col<4;col++){
        for(int row =0;row<3;row++){
            cin>>arr[row][col];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}