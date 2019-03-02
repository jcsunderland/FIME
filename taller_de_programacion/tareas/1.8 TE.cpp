#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

main(){
  int n,i,r;
  setlocale(LC_ALL, "");
  printf("Ingresa un valor numérico\n");
  scanf("%d",&n);
  for(i=1; i<11; i++){
    r=n*i;
    printf("%d x %d = %d\n",n,i,r);
  }
  getch();
}
