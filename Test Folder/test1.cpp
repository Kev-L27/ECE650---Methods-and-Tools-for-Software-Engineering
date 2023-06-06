#include<stdio.h>
#include<iostream>
using namespace std;

template <typename T>
T mins(T a, T b){
    //cout << "test" << endl;
    return a < b ? a : b;
}

class ADT {
    private:
        int value;
    public:
        ADT(int v): value(v){}
        friend bool operator< (const ADT& t1, const ADT& t2){
            return t1.value < t2.value+1;//t2.value is read-only, so can't use ++ here as it will just modify the value, which is not permitted
        }
        int getter(){
            return value;
        }
};

int main(){
    //cout << "Hello" << endl;
    ADT x(10), y(4);
    y = mins<ADT>(15, x);
    cout << y.getter()+1;
    return y.getter()+1;
}