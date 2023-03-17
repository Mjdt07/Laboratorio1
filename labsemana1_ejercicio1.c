#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float numero1, suma, multip, divis, resta;
	int numero2;
	
	int semilla = time(NULL);

	srand(semilla);
		numero2= rand()%10;
		printf("El numero aleatorio es:%d", numero2);
	
	
	printf("\nIngrese un numero:");
		scanf("%f", &numero1);
	

	suma = numero1 + numero2;
		printf ("La suma entre los dos numeros es: %.2f",suma); 
	
	
	resta  = numero1 - numero2;
		printf ("\nLa resta entre los dos numeros es: %.2f",resta); 
	
	multip = numero1 * numero2;
		printf ("\nLa multiplicacion entre los dos numeros es: %.2f",multip); 	
	
	divis = numero2 / numero1;
		printf ("\nLa division entre los dos numeros es: %.2f",divis); 
	
	return 0;
}

