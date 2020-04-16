#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//Estructuras para la aplición

typedef struct
{
    char* Tipo;
    int Bonus;
    int Ataque;
}Arma;

typedef struct
{   
    char * Tipo;
    int Bonus;
    int Defenza;
}Armadura;

typedef struct
{
    char * Tipo;
    Arma  * Ataque;
    Armadura * Defenza;
}Personaje;

//ARREGLOS DE CADENA 
char * TiposDePersonajes[] = {"Mago", "Hada", "Orco", "Guerrera", "Escudero","Elfo"};
char * TiposDeArmas[] = {"Espada", "Arco", "Hacha", "Cuchillo", "Espada Milenaria","Latigo"};
char * TiposDeArmaduras[] = {"Coraza de Metal", "Casco", "Hombreras de Plata", "Botas de guerra", "Greba","Escudo"}; 


//Funciones 
Armadura * CrearArmadura(int defenza, int bonus);

int main()
{

    srand (time(NULL));
    Personaje * player = (Personaje *) malloc(sizeof(Personaje));
    

    Armadura * nuevaArmadura  = CrearArmadura(rand() % 5, rand() % 5);
    player->Defenza = nuevaArmadura;    

    printf("%s", player->Defenza->Tipo);    
    getchar();  
    return 0;
}

Armadura * CrearArmadura(int defenza, int bonus)
{
    Armadura * nuevaArmadura = (Armadura *) malloc(sizeof(Armadura));  
    int aletorio = rand() % 5;          
    
    nuevaArmadura->Defenza = defenza;
    nuevaArmadura->Bonus = bonus;
    
    int tamanio = strlen(TiposDeArmaduras[aletorio]);   
    nuevaArmadura->Tipo = (char *) malloc( sizeof(tamanio) * sizeof(char *));    
    strcpy(nuevaArmadura->Tipo,TiposDeArmaduras[aletorio]);


    return nuevaArmadura;
}