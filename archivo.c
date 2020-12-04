//--------------------	Librerias
#include <stdio.h>
#include <string.h>

//---------------------		Define
#define LIMITE 250

//--------------------	Estructuras
typedef struct dato{
	int id;
	int time;
	int source;
	int destination;
	char protocol[3];
	int lenght;
	char description[50];
}Datos;
/*
typedef struct _Nodo {
   struct _Dato info;
   struct _Nodo *siguiente;
} tipoNodo;

//----------------------	Typedef
typedef tipoNodo *punteroNodo;
typedef tipoNodo *Lista;
*/

FILE *archivo;


//------------------------	Funciones
//verfica si el archivo se encuentra  o no
void verificarArchivo(FILE *archivo){
			printf("Verificando archivo...\n");
			if (archivo==NULL)
			{
				printf("No leyo el archivo. Asegurate de tener el archivo junto al ejecutable\n");
			}else {
				printf("Todo fino, todo correcto\n");
			}
}

int main(){
	FILE *archivo;
	Datos vector[5];

	//Abrimos el archivo y lo verificamos
	archivo = fopen("Wiresha.txt", "r");
	printf("Abriendo archivo...\n");
	verificarArchivo(archivo);

	while(!feof(archivo)){
		fscanf(archivo, "%d", &vector[0].id);
	}

	printf("%d\n", vector[0].id);

	printf("Cerrando archivo...\n");
	fclose(archivo);
	printf("Cerrado.\nSaliendo del programa.");
  return 0;
}



	/*while(fgets(cadena, longuitud, archivo) != NULL)
	{
		i = strlen(cadena);
		printf("%s\n", cadena[i]);
	}*/

//No.	Time		Source		Destination	Protocol	Length		Info
//
/**
 * 
2	0.001122188	192.168.137.49	91.189.88.178	TCP		78		37274 → 443 [ACK] Seq=1 Ack=4294937421 Win=7078 Len=0 TSval=4279162992 TSecr=471092063 SLE=4294938779 SRE=1359
3	0.013819416	91.189.88.178	192.168.137.49	TCP		1424		[TCP segment of a reassembled PDU]
4	0.014943143	192.168.137.49	91.189.88.178	TCP		78		[TCP Dup ACK 2#1] 37274 → 443 [ACK] Seq=1 Ack=4294937421 Win=7078 Len=0 TSval=4279163006 TSecr=471092063 SLE=4294938779 SRE=2717
5	0.078017170	91.189.91.42	192.168.137.49	SSL		1424		Continuation Data
6	0.078119811	192.168.137.49	91.189.91.42	TCP		66		58852 → 443 [ACK] Seq=1 Ack=1359 Win=3721 Len=0 TSval=536645029 TSecr=943534127
7	0.095658556	91.189.88.178	192.168.137.49	TCP		1424		[TCP segment of a reassembled PDU]
8	0.096586849	91.189.88.178	192.168.137.49	TCP		1424		[TCP segment of a reassembled PDU]
9	0.096770258	192.168.137.49	91.189.88.178	TCP		78		[TCP Dup ACK 2#2] 37274 → 443 [ACK] Seq=1 Ack=4294937421 Win=7078 Len=0 TSval=4279163089 TSecr=471092063 SLE=4294938779 SRE=5433
10	0.096816571	91.189.91.42	192.168.137.49	SSL		1424		Continuation Data
11	0.096850331	192.168.137.49	91.189.91.42	TCP		66		58852 → 443 [ACK] Seq=1 Ack=2717 Win=3721 Len=0 TSval=536645048 TSecr=943534150
12	0.096888206	91.189.88.178	192.168.137.49	TCP		1424		[TCP segment of a reassembled PDU]
13	0.096909766	91.189.88.178	192.168.137.49	TCP		1424		[TCP segment of a reassembled PDU]
14	0.097010200	91.189.91.42	192.168.137.49	SSL		1424		Continuation Data
15	0.097043534	192.168.137.49	91.189.91.42	TCP		66		58852 → 443 [ACK] Seq=1 Ack=4075 Win=3713 Len=0 TSval=536645048 TSecr=943534173
16	0.097407254	91.189.88.178	192.168.137.49	TCP		1424		[TCP segment of a reassembled PDU]
 */