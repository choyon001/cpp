#include<bits/stdc++.h>
using namespace std;

int insertion(int arr[],int size,int value){
    arr[size]=value;
    size=size+1;
    return size;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int insert_sp_position(int arr[],int n,int value,int newindex){
    int i;
    for(i=n-1;i>=newindex-1;i--){
        arr[i+1]=arr[i];
    }
    arr[newindex-1]=value;
    return n;
}

//bubble sort
void bubbleSort(int arr[],int size){
    int flag=0;
    for(int i=1;i<size;i++){
        for(int j=0;j<size -i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag =1;
            }
        }
        if(flag==0)break;
    }
}

// delettion element
int deletion(int arr[],int n,int deletedIndex){
    for(int i=deletedIndex;i<n;i++){
        arr[i]=arr[i+1];
    }
    cout<<"Deleted Successfully"<<endl;
    return n-1;
};

// linear Search and count
void linearSearch(int arr[],int n,int searchElement){
    int totalCount = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==searchElement){
            totalCount++;
        }
    }
    if(totalCount==0){
        cout<<"The element is not found"<<endl;
    }
    else{
        cout<<"The element is found and total presents "<<totalCount<<" times"<<endl;
    }
}


// binary Search and count
void binarySearch(int arr[],int n,int searchElement){
    
    bubbleSort(arr,n);
    int start = 0;
    int end = n;
    int mid = (start+end)/2;
    bool flag = true;
    while(start<=end){
        if(arr[mid]==searchElement){
            cout<<"the value is "<<arr[mid]<<" and index is "<<mid+1<<endl;
            flag = false;
            break;
        }
        else if(searchElement>arr[mid]){
            start=mid+1;
        }
        else{
            end = mid -1;
        }
        mid = (start + end)/2;
    }
    if(flag){
        cout<<"the element is not in the array list"<<endl;
    }
}
int main(){
    int arr[100] ;
    int n;
    int choice=0;
    cout<<"Enter the number of  values "<<endl;
    cin>>n;
    cout<<"Enter values:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(1){
        cout<<endl;
        cout<<"..........menu........"<<endl;
        cout<<"Press 0 for quit"<<endl;
        cout<<"Press 1 for insertion at last position"<<endl;
        cout<<"Press 2 for display"<<endl;
        cout<<"Press 3 for specific insertion"<<endl;
        cout<<"Press 4 for Bubble Sort"<<endl;
        cout<<"Press 5 for element deletion"<<endl;
        cout<<"Press 6 for Linear Search and count the total presents of the element"<<endl;
        cout<<"Press 7 for Binary Search and count the total presents of the element"<<endl;
        cout<<endl;


        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 0:
                cout<<"you exit the program"<<endl;
                exit(0);
                break;
            case 1:
                int newvalue;
                cout<<"Enter the new value "<<endl;
                
                cin>>newvalue;
                n=insertion(arr,n,newvalue);
                break;
            case 2 :display(arr,n);
                break;
            case 3:
                int insertvalue;
                int newIndex;
                cout<<"Enter the new value "<<endl;
                
                cin>>insertvalue;
                cout<<"Enter your desire index "<<endl;
                cin>>newIndex;
                n=insert_sp_position(arr,n,insertvalue,newIndex);
                break;

            case 4:
                bubbleSort(arr,n);
                display(arr,n);
                break;
            case 5:
                
                if(n!=0){
                    int deletedIndex;
                     cout<<"Enter the position of element that you want to delete from "<<1<<" to "<<n<<endl;
                     cin>>deletedIndex;
                     if((deletedIndex-1) >=0 && (deletedIndex-1)<n && deletedIndex!=0){
                        n=deletion(arr,n,deletedIndex-1);
                     }
                     else{
                        cout<<"your deleted index is not valid "<<endl;
                     }
                }
                else{
                    cout<<"Array is empty"<<endl;
                }
               
                break;
            case 6:
                int searchElement;
                cout<<"Enter the element that you want to search and count"<<endl;
                cin>>searchElement;
                linearSearch(arr,n,searchElement); 
                break;
            case 7:
                int sElement;
                cout<<"Enter the element that you want to search and count"<<endl;
                cin>>sElement;
                binarySearch(arr,n,sElement);

                break;   
            default:
                break;
            
        }
        
    }
    return 0;
}