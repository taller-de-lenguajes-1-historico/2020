#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef struct producto {
    int ProductoID; //Numerado en ciclo iterativo
    int Cantidad; // entre 1 y 10
    char *TipoProducto; // Algun valor del arreglo TiposProductos
    float PrecioUnitario; // entre 10 - 100
}p;

typedef struct Cliente {
    int ClienteID; // Numerado en el ciclo iterativo
    char *NombreCliente; // Ingresado por usuario
    int CantidadProductosAPedir; // (alteatorio entre 1 y 5)
    p *Productos; //El tamanio de este arreglo depende de la variable
    // â€œCantidadProductosAPedirâ€
}cliente;

void cargarProducto(cliente **C, int per);
void mostrarClienteYProductos(cliente **C, int a);
char *tiposProductos[]={"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};

int main(){

    cliente *clien;
	//char *tiposProductos[]={"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};
    int num, i=0;
	char nombre[30];

    srand(time(NULL));
    

	printf("Numeros de visitas:");
    scanf("%d",&num);
    fflush(stdin);
    
	clien = (cliente*)malloc((num+1)*sizeof(cliente));
	if (clien== NULL){
		printf("espacio insuficiente");
	}

	for (int i = 0; i < num; i++)
	{
		printf("ingrese el nombre del %d cliente: ",i+1);
		gets(nombre);
		 
		clien->NombreCliente = (char*)malloc(strlen(nombre)*sizeof(char));
		if (clien->NombreCliente== NULL)
		{
			printf("espacio insuficiente");
		}
		strcpy(clien->NombreCliente,nombre);
		printf("ingrese ID del cliente: ");
		scanf("%d",&(clien->ClienteID));

	}
	
	while(i<num){
		cargarProducto(&clien,i);
		fflush(stdin);
		i++;		
		system("cls");
	}
    mostrarClienteYProductos(&clien,num);
	scanf(" %c");
	getchar();
    return 0;
}

void cargarProducto(cliente **C, int per){
	
	char nombre[30], aux[12];
	
	int a=1,i,j=0;
	cliente *c = *C;

	
	c->CantidadProductosAPedir=rand()%5+1; // piden los productos
	c->Productos =(p *)malloc((c->CantidadProductosAPedir)*sizeof(c->Productos)); //reservan los productos pedidos		 
	
	for (int i = 0; i < c->CantidadProductosAPedir; i++) // crean y se cargan tantos productos como los pedidos
	{
		c->Productos[i].Cantidad = rand() % 10;
		c->Productos[i].ProductoID = i + 1;
		c->Productos[i].PrecioUnitario = 10 + rand() % (100 - 10);		
		a = 1 + rand() % 5;
		int cant1 = (strlen(tiposProductos[a])+1);
		c->Productos->TipoProducto = (char*)malloc(cant1 *sizeof(char));
		if (c->Productos->TipoProducto == NULL){
			printf("espacio insuficiente");
		}
		strcpy(c->Productos->TipoProducto,tiposProductos[a]);		
	}				
	
}

void mostrarClienteYProductos(cliente **C,int a)
{
	cliente *c = *C;
	int i=0,j;
	
	for(i=0;i<a;i++){
		//los productos que si guardan los datos son
		printf("\nEl ID del cliene: %d", c->ClienteID);//no
		printf("\nNombre del cliente: %s",c->NombreCliente);//si
		printf("\nCantidad de productos a Pedir: %d",c->CantidadProductosAPedir);//si
		
		for(j=0;j<c->CantidadProductosAPedir;j++){
			printf("\nEl producto pedido es: %s",c->Productos->TipoProducto);//no
			printf("\nEl ID del producto es: %d",c->Productos->ProductoID);//no
			printf("\nLa cantidad del productos: %d",c->Productos->Cantidad);//no
			printf("\nPrecio por unidad: %2.f",c->Productos->PrecioUnitario);//no
			*(c->Productos+j);
		}
		*(c++);
	}
}