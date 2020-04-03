/*EJEMPLO 7. CAST's*/
#include <stdio.h>

int main()
{
  int  Fuerza = 125;
  int  Superficie = 63;
  double Presion;
  
  printf("\r\nLos datos: \r\n-----------------------\r\n");
  printf("Fuerza  = %d. \r\nSuperficie  = %d.\r\n\r\n", Fuerza, Superficie);

  Presion = Fuerza/Superficie;
  
  printf("\r\nPresion = Fuerza/Superficie \r\n");
  printf("-------------------------------\r\n");
  printf("Sin Cast, Presion es:%5.2f \r\n", Presion);

 /// Presion = ??¿? que cas deberías hacer?
  
  printf("Con Cast, Presion es:%5.2f \r\n", Presion);
  getchar();
  return 0;
}

