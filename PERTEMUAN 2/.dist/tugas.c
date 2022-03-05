#include <stdio.h>

int main(){
    // Variabel
    int operand1;
    int operand2;

    // Input
    printf("Masukkan operand 1: ");
    scanf(" %d", &operand1);
    printf("Masukkan operand 2: ");
    scanf(" %d", &operand2);

    // Proses
    int tambah = operand1 + operand2;
    int kurang = operand1 - operand2;
    int kali = operand1 * operand2;
    int bagi = (float) operand1 / (float) operand2;
    int sisa = operand1 % operand2;
    // Output
    printf("Hasil penjumlahan: %d\n", tambah);
    printf("Hasil pengurangan: %d\n", kurang);
    printf("Hasil perkalian: %d\n", kali);
    printf("Hasil pembagian: %.2f\n", bagi);
    printf("Hasil sisa bagi: %d\n", sisa);
    
}