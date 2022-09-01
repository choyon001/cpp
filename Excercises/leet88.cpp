#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=0,j=0;

    while(i<m && j<n){
        if(nums1[i++]<nums2[j]){
            // i++;
            // cout<<"used i"<<endl;
        }
        else{
            swap(nums1[i++],nums2[j]);
            // i++;
            // cout<<"used j"<<endl;
        }
        // cout<<"used"<<endl;
    }
    while(i<m+n){
        if(i==0 && j==0){
            nums1[i]={0};
        }
        else if(i==0){
            nums1[i]=nums2[j];
        }
        else{
            nums1[i++]=nums2[j++];
        }        
    }        
    }

void print(vector<int> arr,int sz){
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> nums1 = {1};
    int  m = 1;
    vector<int> nums2 = {0};
    int n = 0;
    merge(nums1,m,nums2,n);
    print(nums1,1);
}