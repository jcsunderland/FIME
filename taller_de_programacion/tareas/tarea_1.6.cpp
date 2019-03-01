#include <conio.h>
#include <stdio.h>

main(){
  int n;
  char r1; 
  
	printf("Ingresa un valor numerico:\n");
	scanf("%d",&n);

	r1=(n%2==0)?printf("El numero %d es par.\n",n):printf("El numero %d es inpar.\n",n);
	getch();
}