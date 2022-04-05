#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5
#define M 7
int main(){

    int i,j;
    int mt[N][M];
    int *punt = &mt[0][0];
    srand(time(NULL));
    for(i = 0;i<N; i++)
    {
        for(j = 0 ; j < M ; j++)
        {
            *(punt + (i * M + j)) = 1 + rand()%100;
            printf("%d ", *(punt + (i * M + j)));
        }
        printf("\n");
    }
    return 0;
}
