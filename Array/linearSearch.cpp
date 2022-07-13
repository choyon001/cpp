#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
    for(int i= 0; i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int key;
    int arr[100];
    int size;
    cout<<"Enter the key you want : ";
    cin>>key;
    cout<<"Enter the size of array: ";
    cin>>size;
    for(int i= 0;i<size;i++){
        cin>>arr[i];
    }
    bool isTrue=linearSearch(arr,size,key);
    if(isTrue){
        cout<<"yes it is present "<<endl;
    }
    else{
        cout<<"No it is not present"<<endl;
    }

    return 0;
}