#include <stdio.h>

int main(){
    
    int i = 0;

    while (i < 10) {
        printf("Nilai - %d\n", i);   
        if(i == 5){
             continue;
        }
        i++;
    }

}

    