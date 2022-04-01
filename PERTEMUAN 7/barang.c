#include <stdio.h>
#include <string.h>

struct barang{
    char nama[20];
    int harga;
    int jumlah;
};

int main(){
    // Inisialisasi struct
    struct barang b1;

    // memasukkan langsung
    strcpy(b1.nama, "Tomat");
    
    
    // Input data
    printf("Nama barang: ");
    scanf("%s", b1.nama);
    printf("Harga barang: ");
    scanf("%d", &b1.harga);
    printf("Jumlah barang: ");
    scanf("%d", &b1.jumlah);

    // Output data
    printf("Nama barang: %s\n", b1.nama);
    printf("Harga barang: %d\n", b1.harga);
    printf("Jumlah barang: %d\n", b1.jumlah);
}