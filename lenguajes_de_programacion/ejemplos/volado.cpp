/* prog3-5 arreglo de numeros aleatorios */
/* librerías de la biblioteca estándar de C  */
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <math.h>

/* directivas de preprocesador  */
#define MAXIMO 1000 

/*  variables globales, estructuradas o ennumeradas */
typedef struct{
	    int Elementos;	
        int auAleatorios[MAXIMO];
        int UNOS;
        int DOSES;
        } regVector;

regVector vtrVector;               

/*  declaracion de funciones o prototipos */
int iCAPTURAR_CANTIDAD_ELEMENTOS();
regVector rINSERCION(regVector vtrArreglo); 
void vIMPRIMIR(regVector vtrArreglo);

/* la función principal del programa */
main() 
{
     /*  variables locales a main() */
     /* no hay en este programa  */ 

   srand(time(NULL));    /* semilla para números aleatorios */    
   vtrVector.Elementos = iCAPTURAR_CANTIDAD_ELEMENTOS();                      
   vtrVector = rINSERCION(vtrVector);
   vIMPRIMIR(vtrVector);   
   system("pause");
} /* fin función main */

/* ------------------------------------------------------------- */
/* definición de las funciones */
int iCAPTURAR_CANTIDAD_ELEMENTOS()
{
   /*  variables locales a iCAPTURAR_CANTIDAD_ELEMENTOS */
	int CantidadEntera;
	char CantidadCadena[4];	
	
	printf("PROGRAMA 3-5 n%cmeros aleat%crios \n", 163, 162);          		
    do{
       printf("Cuantos elementos num%cricos aleatorios deseas generar? M%cximo %d \n", 130, 160, MAXIMO);
        scanf(" %[^\n]",CantidadCadena);
		CantidadEntera = atoi(CantidadCadena);	/* atoi convierte el parámetro de cadena a entero */
        if( CantidadEntera <= 0 || CantidadEntera > MAXIMO )
        {
        	printf("El dato capturado para la cantidad elementos est%c fuera del rango permitido \n", 160);
        	printf("favor de capturar un dato entero positivo, M%cximo %d \n", 160, MAXIMO);        	
		} /* fin if */
	}while( CantidadEntera <= 0 || CantidadEntera > MAXIMO );
	return( CantidadEntera );	
} /* fin funcion iCAPTURAR_CANTIDAD_ELEMENTOS */
/* ------------------------------------------------------------- */
regVector rINSERCION(regVector vtrArreglo)
{
   /*  variables locales a rINSERCION */	
   int i;           
   vtrArreglo.UNOS = 0;
   vtrArreglo.DOSES = 0;
   i = 0;
   do{
         vtrArreglo.auAleatorios[i] = 1 + rand()% 2;   
         if(vtrArreglo.auAleatorios[i] == 1)
         {
         	vtrArreglo.UNOS = vtrArreglo.UNOS + 1;
		 } 
		 else
		 {
		 	vtrArreglo.DOSES = vtrArreglo.DOSES + 1;
		 }/* fin if */
		i = i + 1;
   }while(i < vtrArreglo.Elementos );   
   return(vtrArreglo); 
} /* fin funcion rINSERCION */
/* ---------------------------------------------------- */

void vIMPRIMIR(regVector vtrArreglo)
{
   /*  variables locales a vIMPRIMIR */	
   int i = 0;                           
   
   do{
        printf("Elemento en la celda[%d] = %d \n", i, vtrArreglo.auAleatorios[i]); 
        i = i + 1;
     }while( i < vtrArreglo.Elementos );  
	 printf("Los unos fueron: %d \n", vtrArreglo.UNOS);
	 printf("Los dos fueron: %d \n", vtrArreglo.DOSES);
} /* fin funcion vIMPRIMIR */

