#include <stdio.h>
#include <stdlib.h>


void * ReservarMemoria(int TotBytes);

int main () 
{
    int  s = 0;    
    int *p;
    int **pd;
    int ***ptr;
    printf("%d - %d - %d - %d",sizeof(s),sizeof(p),sizeof(pd),sizeof(ptr));    

    /// Arreglo de 3 dimensiones utilizando 3 punteros 
    
    int *** pdMAtriz3 = (int ***) ReservarMemoria(sizeof(int **) * 4);   // malloc(8 bytes * 4)   
    for (int h = 0; h < 4; h++) // Capas 
    {        
        pdMAtriz3[h] = (int **) ReservarMemoria(sizeof(int *) * 3);     // malloc(8 bytes * 3)

        for (int i = 0; i < 3; i++) // filas
        {
            pdMAtriz3[h][i] = (int *) ReservarMemoria(sizeof(int) * 2); // malloc(4bytes * 2)

            for (int j = 0; j < 2; j++) //columnas
            {
                pdMAtriz3[h][i][j] = 1 + (2 * i) +  j;
            }        
        }
    }

    free(pdMAtriz3);
    getchar();
    return 0;
}

void *ReservarMemoria(int TotBytes){
	void *pAux;
	if((pAux=malloc(TotBytes))==NULL) {
		printf("No pudo reservar memoria dinámica");
		getch( ); exit(1);        
	}
	return(pAux);
}
