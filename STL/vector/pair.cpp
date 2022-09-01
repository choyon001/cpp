// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
//     pair <int,int> p ;
//     p=make_pair(32,332);
//     // p.first = 34;
//     // p.second =3;
//     cout<<p.first<<" "<<p.second<<endl;

// ************ pair of array ***********
int a[]={3,2,4};
int b[]={2,3,6};
pair<int,int> p_array[3];
p_array[0]={a[0],b[0]};
p_array[1]={a[1],b[1]};
p_array[2]={a[2],b[2]};
swap(p_array[0],p_array[1]);
for(int i=0;i<3;i++){
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
}


}