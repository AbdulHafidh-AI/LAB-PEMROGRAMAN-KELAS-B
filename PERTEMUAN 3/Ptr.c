#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n = 10;   
    int* p = &n; // Variable p of type pointer is pointing to the address of the variable n of type integer.   

    printf("%d\n", p); // Prints the address of the variable n. 
    printf("%d", *p); // Prints the value of the variable n.

    return 0;
}