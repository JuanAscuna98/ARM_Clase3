#include <stdio.h>

void burbuja (int arreglo[], int longitud);
void intercambiar(int* a, int* b);

int main()
{
    int num_ordenar[] = {30, 25, 12, 34,-4, -53, 56, 200, 43, 28};

    //Mostrando datos del arreglo no ordenado
    int longitud_arreglo_Bytes = sizeof(num_ordenar);
    int longitud_elemento = sizeof(num_ordenar[0]);
    int longitud_arreglo = longitud_arreglo_Bytes / longitud_elemento;
    
    printf("Datos del arreglo sin ordenar: ");

    for(int i = 0; i < longitud_arreglo ; i++ )
    {
        printf("%d ",num_ordenar[i]);
    }

    printf("\n");

    burbuja(num_ordenar,longitud_arreglo);

    printf("Datos del arreglo ordenados: ");

    for(int i = 0; i < longitud_arreglo ; i++ )
    {
        printf("%d ",num_ordenar[i]);
    }

    printf("\n");
}

void burbuja(int arreglo[], int longitud)
{
    for(int j = 0; j < longitud; j++)
    {
        for(int k = 0; k < longitud-j-1; k++)
        {
            if (arreglo[k] > arreglo[k+1])
            {
                intercambiar(&arreglo[k],&arreglo[k+1]);
            }
        }
    }
}

void intercambiar(int* a,int* b)
{
    int temporal = *a;
    *a = *b;
    *b = temporal;
}