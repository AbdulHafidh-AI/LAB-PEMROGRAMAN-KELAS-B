#include <stdio.h>

int luasPersegi(int sisi){
    return sisi * sisi;
}

int main(){
    int a = 10;

    printf("Luas persegi: %d", luasPersegi(a));
}