//deque is basically you can push or pop both side which you can't do in array . there is only push or pop back into array
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    for(int i:d){
        cout<<i<<endl;
    }
    d.erase(d.begin(),d.begin()+2);
    for(int i:d){
        cout<<" Erase "<<i<<endl;
    }
    return 0;
} 