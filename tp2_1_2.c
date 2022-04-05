#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){
    int i, vt[N];
    int *puntero;
    srand(time(NULL));
    puntero = vt;

    while (i < 20)
    {
        *puntero = 1 + rand()%100;
        printf("%d ", *puntero);
        i++;
        *(puntero++);
    }

    return 0;
}
