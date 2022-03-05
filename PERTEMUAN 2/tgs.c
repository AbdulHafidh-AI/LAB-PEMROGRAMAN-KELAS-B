#include <stdio.h>

int main(){
    // Variabel
    int operand1;
    int operand2;

    printf("==== PROSES INPUTAN ====\n");
    // Input
    printf("Masukkan operand 1: ");
    scanf(" %d", &operand1);
    printf("Masukkan operand 2: ");
    scanf(" %d", &operand2);

   
    // Proses
    int tambah = operand1 + operand2;
    int kurang = operand1 - operand2;
    int kali = operand1 * operand2;
    float bagi = (float) operand1 / (float) operand2;
    int sisa = operand1 % operand2;

    printf("==== HASIL OUTPUT ====\n");
    // Output
    printf("Hasil penjumlahan operand 1 + operand 2: %d\n", tambah);
    printf("Hasil pengurangan operand 1 - operand 2: %d\n", kurang);
    printf("Hasil perkalian operand 1 * operand 2: %d\n", kali);
    printf("Hasil pembagian operand 1 / operand 2: %.1f\n", bagi);
    printf("Hasil sisa bagi operand 1 dan operand 2: %d\n", sisa);
    
}