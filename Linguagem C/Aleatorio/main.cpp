#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    srand((unsigned)time(NULL)); // ALIMENTA O RAND

    int randon=rand();

    printf("\n%d\n", randon % 99); //Vai vir números entre 1 e 99
}
