#include<stdio.h>

template <typename T>
T min(T a, T b) {
    return a<b++ ? a : b;
}

int main(){
    int x;
    x = min<int>(10, 3);
    //printf(x);
    return x;
}