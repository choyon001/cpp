#include<iostream>
#include<vector>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<long int>ans;
    ans.empty();   
    int a=0,b=0;
    cin>>a>>b;
    int xOr=0;
    long int sum = 0;
    while(a<b){
        for( int i = a+1;i<=b;i++){
            xOr = a^i;
            ans.push_back(xOr);
        }
        a++;
    }
    for(long int i = 0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
    // cout<<xOr<<endl;
    // cout<<sum<<endl;
    return 0;
}