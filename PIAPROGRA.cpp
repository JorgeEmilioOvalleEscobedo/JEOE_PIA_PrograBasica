#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;


struct ARTICULOS //estructura
{
	string ArtclNombre, ArtclConsola, ArtclDescripcion, ArtclEstado;
	float ArtclPrecio, Articulo, ArtclTotal, impuesto;
	int ArtclAnio, ArtclNum, ArtclClasficacion;

	
};

int alta;

ARTICULOS* TIENDA; //puntero

void Alta();
void Lista();
void Modificar();
void Eliminar();
void Archivo();

int main() {

	int opcionmenu;

	printf("Menu \n");
	printf("1- Dar de Alta Articulo \n");
	printf("2- Lista de Articulos \n");
	printf("3- Modificar un articulo \n");
	printf("4- Eliminar un articulo \n");
	printf("5- Limpiar pantalla \n");
	printf("6- Salir y Guardar \n");
	cin>>opcionmenu;

	switch (opcionmenu)
	{
	case 1:
		Alta();
		return main();
		break;

	case 2:
		Lista();
		return main();
		break;

	case 3:
		Modificar();
		
		return main();
		break;

	case 4:
		Eliminar();
		return main();
		break;

	case 5:
		system("cls"); //system("clear");
		return main();
		break;

	case 6:
		Archivo();
		break;
	}


}

void Alta() {
	printf("Ingrese cantidad de articulos que desee dar de Alta \n");
	scanf_s("%d", &alta);

	TIENDA = new ARTICULOS[alta]; //NEW, arreglo dinamico
	for (int i = 0; i < alta; i++) {
		printf("\n ");
		printf("\n ");
		//numero
		printf("Numero de Articulo \n");
		scanf_s("%d", &TIENDA[i].ArtclNum);
		cin.ignore();
		//nombre
		printf("Nombre de Articulo \n");
		getline(cin, TIENDA[i].ArtclNombre);
		//clasicicacion
		printf("Edad recomendada \n");
		scanf_s("%d", &TIENDA[i].ArtclClasficacion);
		cin.ignore();
		//consola
		printf("Consola o Plataforma \n");
		getline(cin, TIENDA[i].ArtclConsola);
		//Anio
		printf("A%co salida del juego\n", 164);
		cin.ignore();
		scanf_s("%d", &TIENDA[i].ArtclAnio);
		//Descripcion
		printf("Descripcion del Juego \n");
		cin.ignore();
		getline(cin, TIENDA[i].ArtclDescripcion);
		//precio
		printf("Precio \n");
		scanf_s("%f", &TIENDA[i].ArtclPrecio);
		//calculando impuesto
		TIENDA[i].impuesto = TIENDA[i].ArtclPrecio * 0.16;
		//impuesto
		printf("Impuestos: %f ", TIENDA[i].impuesto);
		printf("\n ");
		//calcular total
		TIENDA[i].ArtclTotal = TIENDA[i].ArtclPrecio + TIENDA[i].impuesto;
		//TOTAL
		printf("TOTAL: %f", TIENDA[i].ArtclTotal);
		printf("\n ");
		printf("\n ");
		

	}


}
void Lista() {
	for (int i = 0; i < alta; i++)
	{
		//if (matricula[i] == 0)
		if (TIENDA[i].ArtclEstado == "ELIMINADO")
		{
			printf("REGISTRO ELIMINADO %d\n", i + 1);
		}
		else
		{
			printf("Articulo No. %d \n", i + 1);
			printf("Numero: %d \n", TIENDA[i].ArtclNum);
			printf("Nombre: %s\n", TIENDA[i].ArtclNombre.c_str());
			printf("Edad Recomendada %d \n", TIENDA[i].ArtclClasficacion);
			printf("Consola o Plataforma  %s \n", TIENDA[i].ArtclConsola.c_str());
			printf("A%co de lanzamiento: %d\n", 164, TIENDA[i].ArtclAnio);
			printf("Descripcion %s \n", TIENDA[i].ArtclDescripcion.c_str());
			printf("Precio %f \n", TIENDA[i].ArtclPrecio);
			printf("Impuestos: %f \n", TIENDA[i].impuesto);
			printf("Total: %f \n", TIENDA[i].ArtclTotal);
		}
	}

}
void Modificar() {

	int j, opcion, opcion2;
	do
	{
		printf("Ingrese el n%cmero de registro a modificar: ", 163);
		cin >> j;
		j = j - 1;

		for (int i = j; i <= j; i++)
		{
			if (TIENDA[i].ArtclEstado == "ELIMINADO")
			{
				printf("REGISTRO ELIMINADO\n");
				printf("Ingrese un nuevo juego:\n");
				opcion2 = 1;
			}
			else
			{
				opcion2 = 2;
			}
		}
	} while (opcion2 == 1);
	printf("Ingrese que desea modificar\n 1.-Numero de Articulo\n");
	printf("2.- Nombre de Juego\n");
	printf("3.- Clasficacion\n");
	printf("4- Consola\n");
	printf("5-A%co de lanzamiento\n", 164);
	printf("6-Descripcion\n");
	printf("7- Precio\n");
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		for (int i = j; i == j; i++)
		{
			printf("Numero del articulo\n");
			scanf_s("%d", &TIENDA[i].ArtclNum);
		}
		break;
	case 2:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Nombre nuevo \n");
			getline(cin, TIENDA[i].ArtclNombre);
		}
		break;

	case 3:
		for (int i = j; i == j; i++)
		{
			printf("Nueva Clasificacion \n");
			scanf_s("%d", &TIENDA[i].ArtclClasficacion);
		}
		break;
	case 4:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Nueva Consola \n");
			getline(cin, TIENDA[i].ArtclConsola);
		}
		break;
	case 5:
		for (int i = j; i == j; i++)
		{
			printf("Nueva Fecha \n");
			scanf_s("%d", &TIENDA[i].ArtclAnio);
		}
		break;

	case 6:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Nueva Descripcion \n");
			getline(cin, TIENDA[i].ArtclDescripcion);
		}
		break;

	}
}
void Eliminar() {
	int j;
	printf("Registro que desee eliminar");
	cin >> j;
	j = j - 1;
	for (int i = j; i == j; i++)
	{
		printf("REGISTRO ELIMINADO %d\n", i + 1);
		TIENDA[i].ArtclEstado = "ELIMINADO";
		TIENDA[i].ArtclNum = 0;
		TIENDA[i].ArtclClasficacion = 0;
		TIENDA[i].ArtclTotal = 0;
	}

}
void Archivo() {

	ofstream archivo;
	string nombrearchivo;
	int texto;
	string texto2;

	nombrearchivo = "ArchivoRegistros.txt";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		cout << "ERROR AL GENERAR ARCHIVO";
		exit(1);
	}

	
	
	
	
	
	
	


	for (int i = 0; i < alta; i++)
	{
		if (TIENDA[i].ArtclEstado == "ELIMINADO")
		{	//verifica si el registro existe
			texto2 = "REGISTRO INVALIDO ";
			texto = i;
			archivo << texto2 << texto << "\n";
		}
		else
		{	//texto que se registrara en el archivo
			archivo << "NUMERO ARTICULO " << "\t";
			texto = TIENDA[i].ArtclNum;
			archivo << texto << "\t" << "\n";

			archivo << "NOMBRE " << "\t";
			texto2 = TIENDA[i].ArtclNombre;
			archivo << texto2 << "\t" << "\n";

			archivo << "CLASIFICACIÓN" << "\t";
			texto = TIENDA[i].ArtclClasficacion;
			archivo << texto << "\t" << "\n";

			archivo << "AÑO DE LANZAMIENTO" << "\t";
			texto = TIENDA[i].ArtclAnio;
			archivo << texto << "\t" << "\n";

			archivo << "DESCRIPCIÓN" << "\t" ;
			texto2 = TIENDA[i].ArtclDescripcion;
			archivo << texto2 << "\t" << "\n";

			archivo << "PRECIO UNITARIO" << "\t";
			texto = TIENDA[i].ArtclPrecio;
			archivo << texto << "\t" << "\n";

			archivo << "IMPUESTO" << "\t";
			texto = TIENDA[i].impuesto;
			archivo << texto << "\t" << "\n";

			archivo << "TOTAL" << "\t";
			texto = TIENDA[i].ArtclTotal;
			archivo << texto << "\t" << "\n";
		}
	}

	archivo.close();

}

//Jorge Emilio Ovalle Escobedo