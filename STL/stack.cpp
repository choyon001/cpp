//stack is basically  LIFO which is last in first out .remind about the platers of  a rack . you take out the upper plate first which kept last . that's the concept 
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> name;
    name.push("choyon");
    name.push("talha");
    name.push("soimon");
    cout<<name.top()<<endl;
    name.pop();
    cout<<"after pop "<<name.top()<<endl;
    return 0;
} 