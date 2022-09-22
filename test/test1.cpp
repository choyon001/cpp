#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl '\n';
#define Area(a,b) (a*b);
#define ELE 1/2/3
#define mini(a,b) ((a<b)?a:b)
int main(){
	optimize();
	int c,d;
	cin>>c>>d;
	cout<<Area(c,d);
	cout<<endl;
	int arr[]={ELE};
	cout<<arr[2]<<endl;
	cout<<"minimum num: "<<mini(c,d);
	cout<<endl;
	int x = 55;
	cout<<"x="<<x<<endl;
	{
		int x=33;
		cout<<"inside scope : "<<x<<endl;
	}
	cout<<"outside scope : "<<x<<endl;
	
	return 0;
}