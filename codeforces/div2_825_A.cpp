#include<bits/stdc++.h>
using namespace std;
int count1(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            count++;
        }
    }
    return count;
}
int count0(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    int n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr_A[n];
        for(int i=0;i<n;i++){
            cin>>arr_A[i];
        }
        int arr_B[n];
        for(int i=0;i<n;i++){
            cin>>arr_B[i];
        }

        int A_one = count1(arr_A,n);
        int B_one = count1(arr_B,n);
        int A_0 = count0(arr_A,n);
        int B_0 = count0(arr_B,n);

        int differnece1 = abs(A_one-B_one);
        int difference0 = abs(A_0 - B_0) ;
        // cout<<"diff 0: "<<difference0<<" diff1 : "<<differnece1<<endl;
        int flag=1;
        if(difference0==differnece1){
            
            for(int i=0;i<n;i++){
                if(arr_A[i]!= arr_B[i]){
                    flag = 0;
                    break;
                }
            }
            if(flag==1){
                cout<<flag-1<<endl;
            }
            else{
                cout<<flag+differnece1<<endl;

            }
        }
        else{
            cout<<differnece1+1<<endl;
        }

    }
    return 0;
}