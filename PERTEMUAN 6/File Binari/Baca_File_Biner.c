#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fptr;
    char bufferredreader[255];
    // Membuat Error Handling ketika file yang dituju tidak ditemukan
    if ((fptr = fopen("file_biner.bin", "rb")) == NULL)
    {
        printf("File tidak ditemukan -_-");
        return EXIT_FAILURE;
    }
    fread(bufferredreader, strlen(bufferredreader),50,fptr);
    printf("%s\n", bufferredreader);
    fclose(fptr);

    return EXIT_SUCCESS;
}