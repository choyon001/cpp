//Queue is basically first in first out . We can think it as a line . When we go to any party to take dish for eat then the front person take the dish first . That's the concept 
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> name;
    name.push("choyon");
    name.push("talha");
    name.push("soimon");
    cout<<"first name: "<<name.front();
    return 0;
}