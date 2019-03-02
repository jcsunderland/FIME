#include <stdio.h>
#include <conio.h>

main(){
  int n,i,r;
  printf("Ingresa un valor numerico\n");
  scanf("%d",&n);
  for(i=1; i<11; i++){
    r=n*i;
    printf("%d + %d = %d\n",n,i,r);
  }
getch();
  
}
