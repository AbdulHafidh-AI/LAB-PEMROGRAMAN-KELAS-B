#include <stdio.h>
#include <stdlib.h>

int main(){

    // inisialisasi Variabel
    char buffer[300];
    FILE *fptr;
    if((fptr = fopen("Document.txt","r")) == NULL){
        printf("File tidak ditemukan");
        return EXIT_FAILURE;
    }

    // baca isi file dengan gets lalu simpan ke buff
  fgets(buffer, 255, fptr);
  // tampilkan isi file
  printf("%s", buffer);
  // tutup file
  fclose(fptr);

  return EXIT_SUCCESS;
    
}