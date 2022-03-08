#include <stdio.h>

int main(){
    // Inisialisasi
    char bufferedwriter[255];
    FILE *fptw;
    // Membuka File untuk ditulis
    fptw = fopen("note.txt", "w");
    // Input baris yang ingin ditulis
    int baris = 0;
    printf("Input baris yang ingin anda tulis: ");
    scanf("%d", &baris);
    getchar();
    // Memakai perulangan untuk menulis file sebanyak baris yang di-input
    for(int i = 0; i < baris; i++){
        printf("Isi dari baris ke %d: ",i + 1);
        fgets(bufferedwriter,sizeof(bufferedwriter),stdin);
        fputs(bufferedwriter,fptw);
    }
}