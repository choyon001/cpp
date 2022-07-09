#include<iostream>
using namespace std;
int main(){
    int amount;
    int Taka100,Taka50,Taka20,Taka1;
    cout<<"Enter your amount in Taka: "<<endl;
    cin>>amount;
    switch(1){
        case 1: Taka100 = amount / 100;
                amount%=100;
                cout<<"You Need "<<Taka100<<" hundred taka notes"<<endl;
        case 2: Taka50 = amount / 50;
                amount%=50;
                cout<<"You Need "<<Taka50<<" fifty taka notes"<<endl;
        case 3: Taka20 = amount / 20;
                amount%=20;
                cout<<"You Need "<<Taka20<<" tweenty taka notes"<<endl;
        
        case 4: Taka1 = amount / 1;
                amount%=1;
                cout<<"You Need "<<Taka1<<" one taka notes"<<endl;
    }
    

    return 0;
}