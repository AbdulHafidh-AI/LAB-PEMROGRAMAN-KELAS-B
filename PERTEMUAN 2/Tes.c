#include <stdio.h>

int main(){
    /*Inisialisasi variabel */
    int a = 9;

    if(a > 10){
        printf("Nilai %d Lebih besar dari 10",a);
    }else if(a < 10){
        printf("Nilai %d Lebih kecil dari 10",a);
    }else{
        printf("nilai %d sama dengan 10",a);
    }
}