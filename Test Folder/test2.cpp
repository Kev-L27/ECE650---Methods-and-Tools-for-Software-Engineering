#include<stdio.h>
#include<iostream>
using namespace std;

class base{
    public:
        base(){
            cout << "Hey: I am the base constructor()." << endl;
        }
};

class derived: public base{
    public:
        derived(){
            cout << "Listen, I may be derived, but I am better than you." << endl;
        }
};

int main(){
    base b;
}