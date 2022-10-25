#include<bits/stdc++.h>
using namespace std;
void isReach(int dest,int position,int &step){
    // int step=0;
    
    if(dest == position){
       
        cout<<"you reached after "<<step;
        return;
    }
     step++;
     dest--;
     cout<<dest<<" ";
    //  cout<<dest<<" ";
    isReach(dest,position, step);
}
int main(){
    int destination = 10;
    int myposition = 1;
    int step=0;
    isReach(destination,myposition,step);
    return 0;
}