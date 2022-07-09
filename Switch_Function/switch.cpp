#include<iostream>
using namespace std;
int main(){
    int number1 ,number2;
    cout<<"Enter your first number: "<<endl;
    cin>>number1;
    cout<<"Enter your second number: "<<endl;
    cin>>number2;
    char op;
    cout<<"Enter your operator: "<<endl;
    cin>>op;
    switch(op){
        case '+':cout<<number1 <<" + "<<number2<<" = "<<number1+number2<<endl;
        break;
        
        case '-':cout<<number1 <<" - "<<number2<<" = "<<number1-number2<<endl;
        break;
        
        case '*':cout<<number1 <<" * "<<number2<<" = "<<number1*number2<<endl;
        break;

        case '/':cout<<number1 <<" / "<<number2<<" = "<<number1/number2<<endl;
        break;

        case '%':cout<<number1 <<" % "<<number2<<" = "<<number1%number2<<endl;
        break;

        default:cout<<"sorry ! your operator is not correct"<<endl;
        break;

    }
    return 0;
}