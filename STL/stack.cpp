//stack is basically  LIFO which is last in first out .remind about the platers of  a rack . you take out the upper plate first which kept last . that's the concept 
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> name;
    stack<int> st;
    name.push("choyon");
    name.push("talha");
    name.push("soimon");
    cout<<name.top()<<endl;
    name.pop();
    cout<<"after pop "<<name.top()<<endl;

    st.push(12); 
    st.push(11);
    st.push(23);
    int n = st.size();
    cout<<"size "<<st.size()<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<st.top();
        st.pop();
    }
    return 0;
} 