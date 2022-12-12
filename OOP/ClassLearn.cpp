#include<iostream>
#include "Hero.cpp"
using namespace std;



int main(){
    Hero h1(20);
    //cout<<h1.getname()<<endl;
    cout<<"size "<<sizeof(h1)<<endl;
    cout<<"level before set = "<<h1.getlevel()<<endl;
    h1.setLevel(20);
    cout<<"level afterss set = "<<h1.getlevel()<<endl;


    Hero *h2 = new Hero(40);
    cout<<(*h2).getlevel()<<endl;
    h2->setLevel(20);
    cout<<"after set level = "<<h2->getlevel()<<endl;
    return 0;
}