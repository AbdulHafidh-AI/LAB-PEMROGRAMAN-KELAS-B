#include <stdio.h>
#include <stdlib.h>

int main(){
    // Inisialisasi Variabel
    char buffer[255];
    FILE *fptr;

    // Membuat error handling ketika file yang dituju tidak ditemukan
    if((fptr = fopen("Document.txt", "r")) == NULL){
        printf("File tidak ditemukan -_-");
        return EXIT_FAILURE; 
    }

    // Membaca keseluruhan isi file
    while (fgets(buffer, sizeof(buffer), fptr))
    {
        printf("%s", buffer);
    }

    // Setelah kita membuka file ini kita harus menutupnya kembali
    fclose(fptr);

    return EXIT_SUCCESS;
}