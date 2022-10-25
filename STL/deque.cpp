//deque is basically you can push or pop both side which you can't do in array . there is only push or pop back into array
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(12);
    dq.push_back(11);
    dq.push_front(33);

    for(int i:dq)cout<<" "<<i;
   
    return 0;
} 