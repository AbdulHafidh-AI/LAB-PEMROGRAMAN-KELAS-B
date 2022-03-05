#include <stdio.h>

int main(){
    // Declare an array
    int arr[5] = {1,2,3,4,5};
    int *ptr;
    ptr = &arr[0]; // Pointer berada pada index-0 di nilai i

    ptr++; // arr[0] -> arr[1]
    ++*ptr; // Nilai index-1 menjadi 3
    ++*ptr; // Nilai index-2 menjad  4
    --*ptr; // Nilai index-2 menjadi 3
    
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ", arr[i]);
    }

    return 0;

}