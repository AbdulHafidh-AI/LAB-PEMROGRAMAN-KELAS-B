#include <stdio.h>


struct mahasiswa{
    char *nama;
    char *NPM;
    char *jenis_kelamin;
    char *alamat;
    char *no_hp;
    float ipk;

};

int main(){

    struct mahasiswa mhs1;
    mhs1.nama = "Alifan";
    mhs1.NPM = "2108107010078";
    mhs1.jenis_kelamin = "Laki-laki";
    mhs1.alamat = "Darussalam";
    mhs1.no_hp = "081212121212";
    mhs1.ipk = 4.0;

    // Menampilkan data dari struct
    printf("Nama: %s\n", mhs1.nama);
    printf("NPM: %s\n", mhs1.NPM);
    printf("Jenis Kelamin: %s\n", mhs1.jenis_kelamin);
    printf("Alamat: %s\n", mhs1.alamat);
    printf("No HP: %s\n", mhs1.no_hp);
    printf("IPK: %.1f\n", mhs1.ipk);




    return 0;
}