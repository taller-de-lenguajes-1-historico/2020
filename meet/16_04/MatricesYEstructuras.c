#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



// (*NuevaEstructuraSimplePorPuntero).tipoPrimitivo = 10;
//     (NuevaEstructuraSimplePorPuntero + 0)->tipoPrimitivo = 10;
//     (*(NuevaEstructuraSimplePorPuntero + 0)).tipoPrimitivo = 10;    
//     NuevaEstructuraSimplePorPuntero[0].tipoPrimitivo =10;




typedef struct {
    int ProductoID;
    int Cantidad;
    char * TipoProducto;
    float PrecioUnitario;
}Producto;

typedef struct {
    int ClienteID;
    char * NombreCliente;
    int CantidadProductosAPedir;
    Producto * Productos; 
}Cliente;

char * TiposProductos [] = {"Galletas", "Snack", "Cigarrillos", "Caramelos", "Bebibas"};

float costoTotal(Producto ** productos);
void mostrar(Cliente ** clientela, int cantidadClientes);
Producto * cargarProducto ();

//1) 
// estructura simple 
// estructura con puntero
// miembros de la estructura que son tipo primitivos (tipo valor) -- int / dobule / etc
// miembros que son punteros
//miembros que es una estructura punteros

//2) recorrer una matriz con punteros.

typedef struct {
    int tipoComun2;
}Estruct2;

typedef struct {
    int tipoComun; 
    int * tipoPuntero;  
    Estruct2 * Estruct2;
    Estruct2 Estruct3;
}ESimple;

int main () 
{
    int i = 0;
    int j = 0;

    
    
    int * pMAtriz;
    pMAtriz = (int *) malloc (sizeof(int) * 3 * 2);

   
    for (int i = 0; i < 3; i++) // filas
    {
        for (int j = 0; j < 2; j++) //columnas
        {
            *(pMAtriz + (2 * i) +  j) = (2 * i) +  j;
        }        
    }

    int ** pdMAtriz = (int **) malloc(sizeof(int *) * 3);    

    for (int i = 0; i < 3; i++) // filas
    {
        pdMAtriz[i] = (int *) malloc(sizeof(int ) * 2);

        for (int j = 0; j < 2; j++) //columnas
        {
            pdMAtriz[i][j] = 1 + (2 * i) +  j;
        }        
    }



    ESimple NuevaEstructuraSimple;    
    NuevaEstructuraSimple.Estruct2 = (Estruct2 *) malloc(sizeof(Estruct2));
    NuevaEstructuraSimple.Estruct2->tipoComun2 = 10;
    NuevaEstructuraSimple.Estruct3.tipoComun2 = 10;


    // acceder a miembros de una estructura 
    NuevaEstructuraSimple.tipoComun = 10;
    NuevaEstructuraSimple.tipoPuntero = &(NuevaEstructuraSimple.tipoComun);

    ESimple * NuevaEstructuraSimplePorPuntero = (ESimple * ) malloc(sizeof(ESimple) * 50);
   
    // acceder a miembros de una estructura declarar como puntero
    NuevaEstructuraSimplePorPuntero[i].tipoComun =10; // *(NuevaEstructuraSimplePorPuntero + i)
    NuevaEstructuraSimplePorPuntero->tipoComun =10;  
    for (int i = 0; i < 50; i++)
    {
        NuevaEstructuraSimplePorPuntero[i].tipoComun = rand() % 10;
        NuevaEstructuraSimplePorPuntero[i].tipoPuntero = (int *) malloc(sizeof(int) * NuevaEstructuraSimplePorPuntero[i].tipoComun );
        for (int j = 0; j < NuevaEstructuraSimplePorPuntero[i].tipoComun; j++)
        {
             (NuevaEstructuraSimplePorPuntero[i].tipoPuntero)[j] = j;
        }
        
    }
                 
    



   
    getchar();
    return 0;
}

