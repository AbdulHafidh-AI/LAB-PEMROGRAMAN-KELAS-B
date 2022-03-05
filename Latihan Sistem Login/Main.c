#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int totalArgumen, char *nilaiArgumen[]){

    if(!(totalArgumen == 3)){ // Tidak sama dengan 3 
        printf("Inputan yang anda masukkan tidak sesuai prosedur -_-");
        return EXIT_FAILURE;
    }

    char userNameInput[50],passwordInput[50];
    strcpy(userNameInput,nilaiArgumen[1]);
    strcpy(passwordInput,nilaiArgumen[2]);

    printf("%s\n", nilaiArgumen[1]);
    printf("%s\n", nilaiArgumen[2]);

    FILE *fptr;
    // Membuat error handling jika file yang dituju tidak ditemukan
    if((fptr = fopen("Database/login.bin", "rb")) == NULL){
        printf("File tidak ditemukan -_-");
        return EXIT_FAILURE;
    }
    // Deklarasi Variabel untuk membaca isi file binari
    char bufferedReader[50];
    fread(bufferedReader,sizeof(char), sizeof(bufferedReader)/ sizeof(char),fptr);
    fclose(fptr);

    /* Deklarasi variabel untuk membuat variabel username dan password 
        dengan memakai fungsi strtok untuk pemisah antara username dan password
        isi dari file binari tersebuat adalah admin@root
        username = admin
        password = root
        Delimiter yang digunakan adalah tanda @*/

        char *string[3];
        char username[50], password[50];
        int temp = 0; // Variabel bantuan

        string[0] = strtok(bufferedReader,"@");
        while (string[temp++] != NULL){
            string[temp] = strtok(NULL,"@");
        }

        // strtok (String tokenizer bertujuan untuk memisahkan string, Ini diambil dari libary String.h)

        strcpy(username,string[0]);
        strcpy(password,string[1]);

        printf("Username:%s\n", username);
        printf("Password:%s\n", password);
        if((strcmp(userNameInput,username) == 0) && (strcmp(passwordInput,password) == 0)){
            printf("Selamat anda berhasil login ^_^");
        }else{
            printf("Maaf Anda gagal login -_-");
            return EXIT_FAILURE;
        }
    return EXIT_SUCCESS;
}