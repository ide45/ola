/*
	Islas Cruz Imatiuh
	Ejercicio 18
	saca promedios namas
*/

# include <stdio.h>
# include <conio.h>

int i,acumulador=0,calificacion;

void todo(int alumnos,int materias);

int main(){
	char END;
	
	do{
	
	system("cls");
	system("COLOR F");
	int materias,alumnos;
	
	printf("Calcule promedios namas\n\nNumero de alumnos: ");
	fflush(stdin);
	scanf("%d",&alumnos);
	
	printf("Numero de materias: ");
	fflush(stdin);
	scanf("%d",&materias);
	system("cls");
	
	todo(alumnos,materias);
	
	printf("\n-------------------------------------------------\nDesea intentar de nuevo? si o no... ");
	fflush(stdin);
	scanf("%c",&END); }while(END == 's'|| END == 'S');

	system("pause");
    return 0;
}

void todo(int alumnos,int materias){
	float promedio,promedioFinal[acumulador];
	
	while (alumnos != 0){
		promedio=0;
		acumulador=acumulador+1;
		printf("Alumno - %d\n",acumulador);
		for(i=1;i<=materias;i++){
			printf("\nMateria -> %d\nCalificacion > ",i);
			fflush(stdin);
			scanf("%d",&calificacion);
			promedio=promedio+calificacion;
		} 	
		promedioFinal[acumulador]=promedio/materias;
		printf("\nEl promedio del alumno %d es: %.2f\n\n\n",acumulador,promedioFinal[acumulador]);
		alumnos=alumnos-1;
	}
}
