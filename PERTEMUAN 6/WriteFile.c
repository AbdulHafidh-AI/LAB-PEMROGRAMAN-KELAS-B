#include <stdio.h>
#include <stdlib.h>

int main(){

    char buff[255];
    char login[255] = "Ini adalah file dokumen";
    FILE *fpW;
    fpW = fopen("Document.txt", "w");
    fwrite(login, sizeof(char), sizeof(login)/sizeof(char), fpW);
    // SETELAH DIBUKA KITA WAJIB MENUTUPI FILE INI
    fclose(fpW);
    return EXIT_SUCCESS;
}

