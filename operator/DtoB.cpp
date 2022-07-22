#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number:"<<endl;
    cin>>n;
    int ans = 1;
    int i = 0;
    while(n!=0){
        cout<<"Number: "<<n<<endl;
        int bit = (n &1);
        ans = (bit * pow(10,i)) + ans;
        i++;
        n >>= 1;
        
    }
    cout<<"The answer is : "<<ans<<endl;


    return 0;
}