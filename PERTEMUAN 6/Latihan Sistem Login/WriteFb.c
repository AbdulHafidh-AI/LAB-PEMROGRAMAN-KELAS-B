#include <stdio.h>

int main(){
    // Membuaka file binari untuk dituliskan sesuatu
    FILE *fpw = fopen("Database/login.bin","wb");
    // Menulis admin sebagai username, dan root sebagai password
    char bufferedWriter[50] = "admin@root";
    // Mengisi file yang ada di dalam variabel bufferedWriter
    fwrite(bufferedWriter,sizeof(char),sizeof(bufferedWriter)/sizeof(char),fpw);
    // Menutup kembali file yang telah dibuka
    fclose(fpw);

    return 0;
}