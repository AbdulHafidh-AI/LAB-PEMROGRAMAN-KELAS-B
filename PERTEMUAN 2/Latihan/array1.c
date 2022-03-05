#include <stdio.h>

int main(){

    // Deklarasi Array
    int arr[] = {10,30,40,50,60};
            //    0 1  2  3  4 = 0 - 4
    //Ukuran array dalam byte
    int ukuran_array = sizeof(arr);

    // Menghtitung indeks array
    int indeks_array = sizeof(arr[0]);
    
    // Menghitung banyak array
    int banyak_array = ukuran_array / sizeof(arr[0]);
    printf("%d", banyak_array);

    // 
}