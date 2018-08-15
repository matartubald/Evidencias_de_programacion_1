/**
  *main.c - Archivo fuente para mostrar la estructura de un 
  *programa codificado en lenguaje c.
**/
// Inclusion de archivos de cabecera
// Contienen los prototipos de funciones de 
// biblioteca y las definiciones de algunas constantes

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define SHIFTL(x,y) x<<y  /* desplaza el contenido de x y lugares a la izquierda
                             (a nivel de bits) */
#define SHIFTR(x,y) x>>y  /* desplaza el contenido de x y lugares a la derecha 
                             (a nivel de bits) */

int main(int argc, char *argv[])
{
  int a,b,c;
  printf("En una variable de tipo int podemos almacenar\n");
  printf("valores enteros desde %d hasta %d\n",
         INT_MIN,INT_MAX);
  
  a=INT_MIN;
  b=sizeof(int); /*cantidad de bytes que utiliza el compilador para almacenar 
                   una variable de tipo int*/ 
  printf("Un int se almacena en %i bits\n",8*b);
#include "dummy.c"   
   
  
  printf("\n");                  
  system("PAUSE");	
  return 0;
}


