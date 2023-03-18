#include <stdio.h>
#include <stdlib.h>


void LimpiarPantalla(){
	
	printf ("\nFuncion para mostrar el uso del void");
	printf ("\n---------------------------------");
	
	
	int si;
	printf("\nDesea limpiar la pantalla? Presione 1 si lo desea o 2 si no lo desea:");
	scanf("%d", &si);
	
	if (si==1){
		
		system ("cls");
		
	}else{
		
		printf("No se han borrado los datos");
		
	}
	
}



int main(){
	
	printf("Datos basicos");
	printf("\n-------------");

	char nombre [50]= "Manuela Duarte";
		printf("\nNombre (Tipo char): %s", nombre);
	
	int edad = 19;
		printf("\nEdad (Tipo entero): %d", edad);	
		
	float peso = 49.556	;
		printf("\nPeso (Tipo float): %.2f", peso);


	double pi = 3.14159265359	;
		printf("\nNumero favorito (Tipo double): %.10f", pi);

	LimpiarPantalla();
	
	return 0;
}

