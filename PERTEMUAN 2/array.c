#include <stdio.h>

int main(){
    
    int arr[4];

    arr[0] = 5;
    arr[1] = 20;
    arr[2] = 10;

    // printf("%d", arr[1]);

    int ukuran_array = sizeof(arr);

    printf("ukuran array dalam byte  d", ukuran_array);

    return 0;
}