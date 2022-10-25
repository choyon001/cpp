//Queue is basically first in first out . We can think it as a line . When we go to any party to take dish for eat then the front person take the dish first . That's the concept 
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> name;
    queue<int> q;
    queue<int> q2;
    name.push("choyon");
    name.push("talha");
    name.push("soimon");
    cout<<"first name: "<<name.front()<<endl;

    q.push(2);
    q.push(4);
    // int a = q.front();
    // cout<<a<<endl;
    cout<<"front : "<<q.front()<<endl;
    cout<<"last: "<<q.back()<<endl;

    cout<<q2.empty()<<endl;
    q2.push(2);
    cout<<"is empty: "<<q2.empty()<<endl;

    q.pop();
    cout<<"size of q: "<<q.size()<<endl;
    cout<<"front : "<<q.front()<<endl;
    cout<<"back: "<<q.back()<<endl;
    return 0;
}