/*
   conversión unaria
*/ 
 
 #include<stdio.h>
 int main()
 {
    int a = 11;         // integer a
    char b = 'g';       // character b  
    a = b;              // b convierte implicitamente a int según la tabla ascii a 103
    
    printf("a = %d\n", a);    
    getchar();
    return 0;
 } 