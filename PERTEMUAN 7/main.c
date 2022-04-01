#include <stdio.h>
#include <string.h>


struct person { // Struct merupakan tipe data custom
    char nama[20];
    int umur;
    char jenis_kelamin[20];
};



int main(){
    // Inisialisasi Struct

    // // Tanpa memakai Struct
    // int nama;
    // int umur;
    // char jenis_kelamin;

    int bilangan = 10;
    float phi = 3.14;
    struct person person1;

    // Memasukkan suatu value ke dalam variabel
    strcpy(person1.nama, "Budi");
    person1.umur = 20;
    strcpy(person1.jenis_kelamin, "Laki-laki");

    // Menampilkan variabel dari struct
    printf("Nama: %s\n", person1.nama);
    printf("Umur: %d\n", person1.umur);
    printf("Jenis Kelamin: %s\n", person1.jenis_kelamin);
}