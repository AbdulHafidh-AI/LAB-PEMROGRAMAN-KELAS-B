#include <stdio.h>

void main(){
    int matriks[3][4] = {  
         {1, 3, 5,5},   
         {5, 3, 1,6}, 
         {6, 2, 3,7}  
  };

    // Array satu dimentsi 

    int arr[5] = {1,2,3,4,5};
    // Menampilkan elemen 1 dari variabel matriks
    printf("Nilai dari elemen matriksnya adalah %d\n", matriks[2][2]);


    
    // // Show elemen of matriks
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf("%d ", matriks[i][j]);
    //     }
    //     printf("\n");
    // }
}