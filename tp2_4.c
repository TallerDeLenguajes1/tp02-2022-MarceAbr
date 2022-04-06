#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5

struct compu
{
    int velocidad;
    int  anio;
    char *tipos_cpu;
    int nucleos;
};

typedef struct compu PC;

void imprimir(PC *compu);
void masVieja(PC *compu);

int main(){

    PC pc[TAM];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    srand(time(NULL));
    for (int i = 0 ; i < TAM; i++)
    {
        pc[i].velocidad = 1 + rand() % 3;
        pc[i].anio = rand() % 8 + 2015;
        pc[i].tipos_cpu = tipos[rand()%6];
        pc[i].nucleos = 1 + rand()%9;
    }


    imprimir(pc);
    masVieja(pc);
    printf("\n");
    return 0;
}

void imprimir(PC *compu)
{
    for (int i = 0; i < TAM; i++)
    {
        printf("\n----- PC %d -----\n", i+1);
        printf("\nVelocidad: %dGHz", compu[i].velocidad);
        printf("\nAnio: %d", compu[i].anio);
        printf("\nProcesador: %s", compu[i].tipos_cpu);
        printf("\nNucleos: %d", compu[i].nucleos);
        printf("\n");
    }
}
 
void masVieja(PC *compu)
{
    int aux = 0;
    for (int i = 0; i < TAM; i++)
    {
        if (aux < compu[i].anio)
        {
            aux = compu[i].anio;
        }   
    }
    printf("La pc mas vieja es de: %d", aux);
}  