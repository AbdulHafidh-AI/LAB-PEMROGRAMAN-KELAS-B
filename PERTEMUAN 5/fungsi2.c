#include <stdio.h>


int penambahan(int a, int b){
    a = b + 2;
    return a + b;
}

int main(){
    int a = 10;
    int b = 10;
    
    printf(" a sebelum: %d", a);
    printf(" b sebelum: %d", b);

    return 0;
}