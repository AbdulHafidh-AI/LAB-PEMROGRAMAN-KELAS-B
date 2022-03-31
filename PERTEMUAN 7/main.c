#include <stdio.h>
#include "person.h"
#include <string.h>


struct person{
    char nama[20];
    int umur;
    char jenis_kelamin[20];
};

int main(){
    // Inisialisasi Struct
    struct person person1;

    strcpy(person1.nama, "Budi");
    person1.umur = 20;
    strcpy(person1.jenis_kelamin, "Laki-laki");

    printf("Nama: %s\n", person1.nama);
    printf("Umur: %d\n", person1.umur);
    printf("Jenis Kelamin: %s\n", person1.jenis_kelamin);
}