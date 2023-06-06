#include<stdio.h>
#include<iostream>
using namespace std;

template <typename KK>
KK testing(KK first){
    return first*first;
}

class Complex {
    private:
        double re, im;

    public:
        Complex(double re, double im){
            std::cout << "The re is: " << re << std::endl;
        };

        // Accessors
        double real() const;
        double imag() const;
        double abs() const;
        Complex exp() const;

        // Mutators
        void normalize();
};

int main(){
    Complex(5, 3);
    int arrays[10];
    cout << "The tested template: "<< testing(5) <<endl;
    return 0;
}