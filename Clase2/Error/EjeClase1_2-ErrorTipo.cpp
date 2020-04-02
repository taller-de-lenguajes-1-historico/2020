/*EJEMPLO 2. PUNTEROS*/

#include <stdio.h>


main()
{
  float   x = 55.4;
  int   *p;     // un puntero a un entero 
  int     a = 10;
  double  y = 5.4;
  int     *ptri = NULL;//inicializa el puntero
  double  *ptrf = NULL;//inicializa el puntero
  
  //asignar a un puntero la dirección de una variable de otro tipo distinto 
  p = &x;     //Error: cannot convert 'float*' to 'int*' 
  printf("El valor correcto es: %f\n", x); printf("\r\n");
  printf("Valor apuntado (como float): %f \n", *p);  printf("\r\n");
  printf("Valor apuntado (como int) : %i \n", *p); 
  printf("\r\n");
  //Intentar asignarle un valor al dato apuntado por un puntero cuando éste es NULL
  *ptri = 5;//ERROR en tiempo de ejecución
  //Asignar punteros de distinto tipo
  ptri = &a;
  ptrf = &y;
  ptri = ptrf; //Error: cannot convert 'double*' to 'int*' 
  printf("Lo apuntado por ptri es: %i\n", *ptri); printf("\r\n");
  printf("Lo apuntado por ptrf es: %f\n", *ptrf); printf("\r\n");


}