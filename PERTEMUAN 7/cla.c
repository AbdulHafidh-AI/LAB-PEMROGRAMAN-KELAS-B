// Belajar CLA (COMMAND LINE ARGUMENTS)
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    

    int jumlahArgumen = argc;
    // Melihat jumlah argument yang diberikan
    printf("Jumlah Argumen yang dimasukkan %d\n", jumlahArgumen);

    /* Jika tidak Memakai perulangan */ 
   // Menampilkan jumlah argumen yang diberikan
    // printf("Isi argumen pertama %s\n", argv[0]);
    // printf("Isi argumen kedua %s\n", argv[1]);
    // printf("Isi argumen ketiga %s\n", argv[2]);
    // printf("Isi argumen keempat %s\n", argv[3]);

    // Memakai perulangan untuk melihat argumen yang diberikan (lebih baik)
    for(int i = 0; i < jumlahArgumen; i++){
        printf("Isi argumen ke-%d %s\n", i, argv[i]);
    }


    return 0;
}