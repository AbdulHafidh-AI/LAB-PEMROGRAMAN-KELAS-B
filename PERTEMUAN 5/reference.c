#include <stdio.h>

int kali(int *a, int*b){
    int hasil = *a * *b;
    int temp = *a;
    *a = *b;
    *b = temp;
    return hasil;
}

int main(){
    int a = 2, b = 7;

    printf("nilai a sebelum masuk fungsi: %d\n", a);
    printf("nilai b sebelum masuk fungsi: %d\n", b);
    
    printf("hasil kali: %d\n", kali(&a, &b));
    printf("nilai a setelah masuk fungsi: %d\n", a);
    printf("nilai b setelah masuk fungsi: %d\n", b);

    return 0;

}