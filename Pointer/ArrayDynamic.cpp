#include<iostream>
using namespace std;
int main(){
	int row;
    int q;
    cin>>row>>q;
    int **arr = new int*[row];
    for(int i=0;i<row;i++){
        int col;
        cin>>col;
        arr[i] = new int[col];
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    // //taking input
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<sizeof(arr[i]);j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // showing output

    for(int i=0;i<q;i++){
        int qi;
        cin>>qi;
        int index;
        cin>>index;
        cout<<arr[qi][index]<<endl;
    }

    // releasing the memory
    // for(int i=0;i<row;i++){
        
    //     delete []arr[i];
    // }
    // delete arr[row];

	return 0;
}