#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int row = 1;
    while(row<=n){
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }
        int col = 1;
        while(col<=row){
            cout<<col;
            col++;
        }
        int third = row-1;
        while(third>0){
            cout<<third;
            third --;
        }
        cout<<endl;
        row++;
    }
    return 0;
}