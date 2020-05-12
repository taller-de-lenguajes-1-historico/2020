#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char TipoDeDocumento[2][12]={"Uso Interno", "Uso Publico"};

typedef struct TDocumento {

    int CantidadDePaginas; // de 1 a 500
    char * TipoDeDocumento; // se construye con los titulos
    int Volumen; // de 1 a 10
}TDocumento;

typedef struct Tnodo {
    TDocumento Documento; // Documento (dato del nodo)
    Tnodo * Siguiente; // Siguiente Nodo.
}Tnodo;

#define CantDocumentos 500

// 0   - listas de documentos 
// 0.1 - CrearListaVacia() ok
// 1 - CrearDocumento() ok
// 1.1 - CrearNodo() ok
// 2 - InsertarNodoALista()  ok
// 3 - QuitarNodoDeLaLista() ok
// 4 - DistribuyeDocumentos() ok
// 5 - ContarCantNodos() ok

//typedef Tnodo * Lista;

Tnodo * CrearListaVacia();
TDocumento CrearDocumento(int _CantidadDePaginas , char* _TipoDeDocumento, int _Volumen);
Tnodo * CrearNodo(TDocumento Tdoc);
void InsertarNodoALaLista(Tnodo ** Lista, Tnodo * Nodo);
Tnodo * QuitarNodoDeLaLista(Tnodo ** Lista);
void DistribuyeDocumentos(Tnodo ** ListaPrincipal,Tnodo ** ListaPPublico,Tnodo ** ListaPInterno);
int ContarCantNodos(Tnodo * Lista);

int main()
{
    Tnodo * ListaPrincipal = CrearListaVacia();
    Tnodo * ListaPInterno = CrearListaVacia();
    Tnodo * ListaPPublico = CrearListaVacia();
    Tnodo * AuxListas;
    TDocumento dAux;
    Tnodo * NNodo;
    srand(time(0));

    for (int i = 0; i < CantDocumentos; i++)
    { 
        //Crear documento
        dAux = CrearDocumento((rand() % 500) + 1 ,TipoDeDocumento[rand() % 2] ,(rand() % 10) + 1);
        //printf("%s \n", dAux.TipoDeDocumento);
        //Crear el nodo
        NNodo = CrearNodo(dAux);
        //printf("%s \n", NNodo->Documento.TipoDeDocumento);
        //printf("--------- \n");
        // insertar en la lista 
        InsertarNodoALaLista(&ListaPrincipal, NNodo);
    }
    
    //pruebo lista
    // AuxListas = ListaPrincipal;
    // while (AuxListas)
    // {        
    //     printf("%s \n", AuxListas->Documento.TipoDeDocumento);
    //     AuxListas = AuxListas->Siguiente;
    // }
    DistribuyeDocumentos(&ListaPrincipal,&ListaPPublico,&ListaPInterno);
    
    int contPrin = ContarCantNodos(ListaPrincipal);
    int contInterno = ContarCantNodos(ListaPInterno);
    int contPPublico = ContarCantNodos(ListaPPublico);

    printf("Nodos Lista Principal :%d \n", contPrin);
    printf("Nodos Lista Interno :%d \n", contInterno);
    printf("Nodos Lista Publico :%d \n", contPPublico);

    getchar();
    return 0;

}

Tnodo * CrearListaVacia()
{
    return NULL;
}

TDocumento CrearDocumento(int _CantidadDePaginas, char* _TipoDeDocumento, int _Volumen)
{
     TDocumento dAux;
     dAux.CantidadDePaginas = _CantidadDePaginas; 
     dAux.TipoDeDocumento = _TipoDeDocumento; 
     dAux.Volumen = _Volumen; 
     return dAux;
}

Tnodo * CrearNodo(TDocumento Tdoc)
{
    Tnodo * aux = (Tnodo *) malloc(sizeof(Tnodo));
    aux->Documento.CantidadDePaginas = Tdoc.CantidadDePaginas;
    aux->Documento.TipoDeDocumento = Tdoc.TipoDeDocumento;
    aux->Documento.Volumen = Tdoc.Volumen;
    aux->Siguiente = NULL;
    return aux;
}

void InsertarNodoALaLista(Tnodo ** Lista, Tnodo * Nodo)
{
    Nodo->Siguiente = *Lista;
    *Lista = Nodo;
}

Tnodo * QuitarNodoDeLaLista(Tnodo ** Lista)
{
    Tnodo *aux = *Lista;
    if(*Lista != NULL)
    {
        *Lista = (*Lista)->Siguiente;
        aux->Siguiente = NULL;     
    }    
    return aux;
}

void DistribuyeDocumentos(Tnodo ** ListaPrincipal,Tnodo ** ListaPPublico,Tnodo ** ListaPInterno)
{   
    Tnodo * Aux;
    while (*ListaPrincipal)
    {
        //obtener el nodo de la cabecera 
        Aux = QuitarNodoDeLaLista(ListaPrincipal);
        //comparar campo
        if(strcmp(Aux->Documento.TipoDeDocumento,TipoDeDocumento[0]) == 0)
        {
            InsertarNodoALaLista(ListaPInterno,Aux);
        }
        else
        {
            InsertarNodoALaLista(ListaPPublico,Aux);
        }

    }
}

int ContarCantNodos(Tnodo * Lista)
{   
    int contador = 0;
    while (Lista)
    {
        contador++;
        Lista = Lista->Siguiente;
    }
    return contador;
}
