#include <conio.h>
#include <stdio.h>

main(){
  float n1,n2,r;
  char op;

	printf("Ingresa el primer valor numerico:\n");
	scanf("%f",&n1);
	printf("Ingresa el simbolo de la operacion:\n");
	scanf("%s",&op);
	printf("Ingresa el segundo valor numerico:\n");
	scanf("%f",&n2);

  if(op=='+'){
    r=n1+n2;
  }else if(op=='-'){
    r=n1-n2;
  }else if(op=='*'){
    r=n1*n2;
  }else if(op=='/'){
    r=n1/n2;
  }else{
    printf("Error!");
  }

  printf("El resultado de la operacion %f %c %f es igual a: %f",n1,op,n2,r);
	getch();
}