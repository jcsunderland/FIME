#include <conio.h>
#include <stdio.h>

main(){
	int m1,m2,m3,c1,c2,c3;
	float ok1,ok2,ok3,ptg;
	char r1,r2,r3;
	
	printf("Ingresa la matricula del primer alumno\n");
	scanf("%d",&m1);
	printf("Ingresa la calificacion del primer alumno\n");
	scanf("%d",&c1);
	printf("Ingresa la matricula del segundo alumno\n");
	scanf("%d",&m2);
	printf("Ingresa la calificacion del segundo alumno\n");
	scanf("%d",&c2);
	printf("Ingresa la matricula del tercer alumno\n");
	scanf("%d",&m3);
	printf("Ingresa la calificacion del tercer alumno\n");
	scanf("%d",&c3);

	ok1=(c1>=70)?1:0;
	ok2=(c2>=70)?1:0;
	ok3=(c3>=70)?1:0;

	ptg=(ok1+ok2+ok3)*100/3;

	r1=(ok1==1)?printf("El alumno con la matricula %d aprobo\n",m1):printf("El alumno con la matricula %d reprobo\n",m1);
	r2=(ok2==1)?printf("El alumno con la matricula %d aprobo\n",m2):printf("El alumno con la matricula %d reprobo\n",m2);
	r3=(ok3==1)?printf("El alumno con la matricula %d aprobo\n",m3):printf("El alumno con la matricula %d reprobo\n",m3);

	printf("El porcentaje de aprobacion es de %f",ptg);
	getch();
}