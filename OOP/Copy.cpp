#include<iostream>
using namespace std;
class Copy{
    int level;
    int health;

    public:
        Copy(int level,int health){
            (*this).level = level;
            this->health = health;
        }

        void print(){
            cout<<"health "<<health<<endl;
            cout<<"level "<<level<<endl;
        }
};