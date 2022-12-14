#include <stdio.h>

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
}