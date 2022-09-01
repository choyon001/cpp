#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<endl;
    }
    vector<int> arrCopy(a);
    for(int i:arrCopy){
        cout<<i<<" ";
    }
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(12);
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(33);
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(34);
    cout<<"capacity: "<<v.capacity()<<endl;
    // v.pop_back();
    // cout<<"capacity: "<<v.capacity()<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    v.erase(v.begin(),v.begin()+1);
    for(int i:v){
        cout<<"erase "<<i;
    }
    cout<<"Size after erase : "<<v.size();
    return 0;
}