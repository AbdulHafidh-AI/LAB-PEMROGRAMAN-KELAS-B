#include <stdio.h>

int main(){
    FILE *fptr;
    char buffer[50];
    int jumlahMaksimal = 100;

    fgets(buffer,jumlahMaksimal, fptr);


    fgetc(fptr);
}