#include<iostream>
using namespace std;
class Hero
{  
    string name="dewan monjur";
    int level=1;
    //char ch;
    public:

    //!!!!! getter setter !!!!!!!!! 
    string getname(){
        return name;
    }
    void setLevel(int l){
        level = l;
    }
    int getlevel(){
        return level;
    }
    // !!!!!!!!!! constructor created !!!!!!!!!!! 
    Hero(){
        cout<<"constructor called ! "<<endl;
    }
    // parameterized constructor created 
    // Hero(int a){
    //     cout<<"parameterized constructor created and value is "<<a<<endl;

    // }

    // uses of this keyword 
    Hero(int level){
        this->level=level;
    }
};

