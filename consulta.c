//programa en C para consultar los datos de la base de datos
//Incluir esta libreria para poder hacer las llamadas en shiva2.upc.es
//#include <my_global.h>
#include <mysql.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void EdadJugador (MYSQL *conn, char *nombre)
{
	int err = mysql_query(conn, "use jugadoresCartas");
	err = mysql_query(conn,"SELECT * FROM Jugadores");
	MYSQL_RES *res;
	MYSQL_ROW row;
	res = mysql_store_result(conn);
	row = mysql_fetch_row(res);  
	if( row == NULL)
	{
		printf("Esta Vacio");
	}
	else
	{
		while(row!=NULL)
		{
			if(strcmp( row[0], nombre) == 0)
			{
				printf("La edad del jugador %s es %s\n",row[0],row[1]);
			}
			row = mysql_fetch_row(res);
		}
	}
}
int main(int argc, char **argv)
{
	MYSQL *conn;
	int cargar;
	conn = mysql_init(NULL);
	if (conn == NULL)
	{
		printf("Error al crear la conexion: %u %s\n",mysql_errno(conn),mysql_error(conn));
		exit(1);
	}
	conn = mysql_real_connect(conn,"localhost","root","mysql",NULL,0,NULL,0);
	if (conn ==NULL)
	{
		printf("Error al inicializar la conexion : %u %s\n",mysql_errno(conn),mysql_error(conn));
		exit(1);
	}
	EdadJugador(conn,"Valeriu Marian");
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
