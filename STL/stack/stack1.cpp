#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> st;
    st.push("a");
    st.push("b");
    st.push("c");
    st.push("d");
    cout<<st.top()<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}