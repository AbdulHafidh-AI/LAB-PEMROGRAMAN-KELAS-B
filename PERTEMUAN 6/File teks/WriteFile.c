#include <stdio.h>
#include <stdlib.h>

int main(){

    char bufferedwriter[255];
    FILE *fpW;
    fpW = fopen("Document.txt", "w");
    // Menyuruh pengguna untuk menginput sesuatu ke dalam file Document.txt
    printf("\n Masukkan Inputan: ");
    fgets(bufferedwriter, sizeof(bufferedwriter),stdin);
    // Menulis isi dari variabel bufferedwrite ke dalam file Document.txt
    fputs(bufferedwriter,fpW);
    // SETELAH DIBUKA KITA WAJIB MENUTUPI FILE INI
    fclose(fpW);
    return EXIT_SUCCESS;
}

