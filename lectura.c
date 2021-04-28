#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

/*	char textoExtraido[500];
	FILE *fichero;
	fichero = fopen ("RECETA.txt","r");
	fgets(textoExtraido,50,fichero);
	printf("Texto extraido es: %s \n",textoExtraido);
	printf(textoExtraido);
	fclose(fichero);
	printf("Proceso de lectura completado");
	return 0; */
/*	FILE *receta;
	char caracteres[100];
	//char s;
	receta = fopen("RECETA.txt","r");
	if (receta == NULL ){
		exit(1);
	}
	else {
		printf("\n El contenido del archivo es \n \n");
		while (feof(receta) ==0){
			char *token = strtok(caracteres,"|");
			while(token != NULL){
				fgets(caracteres,100,receta);
				printf("%s",caracteres);
			}
		}

	}
	fclose(receta);
*/

	FILE *receta;
	char carac;
//	char receta[50] = File.Read11Lines("RECETA.txt");
	receta = fopen("RECETA.txt","r");

	if (receta != NULL){
		printf("El contenido es: \n");
		while ( (carac = fgetc(receta)) != EOF ){
			printf ("%c",carac);
		}
	}
	fclose(receta);
	return 0;
}
