#include <stdio.h>
int main()
{
    char satu[] = "kelas_pemrograman";
        // satu = {'k','e','l','a','s','_','p','e','m','r','o','g','r','a','m','a','n'};
    char *dua = "kelas_pemrograman";
    // jika ingin menampilkan 'i' pada array satu
    printf("satu: %c\n", satu[1]);
    // jika ingin menampilkan 'i' pada variabel dua
    dua++;
    dua++;/*lakukan increment agar posisi yang ditunjukkan
    oleh pointer berpindah ke posisi selanjutnya*/
    printf("dua: %c", *dua);
    return 0;
}
