#include <iostream>
using namespace std;
int main() {
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		int arr[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int a;
				cin>>a;
				arr[i][j]=a;
			}
		}
        int count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				for(int v=i;v<n;v++){
					for(int k=j;k<n;k++){
						if(arr[i][j]>arr[v][k]){
							count++;
						}
					}
				}
			}
		}
		cout<<count<<endl;
			}
}