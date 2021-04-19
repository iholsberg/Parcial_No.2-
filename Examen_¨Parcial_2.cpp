// Examen_¨Parcial_2.cpp 
// Nombre: Ingrid Isabel Holsberg Perez
// Carnet: 3590-20-7684
// Ingenieria en Sistemas 
// Seccion: A


#include <mysql.h>
#include <iostream>
using namespace std;
int q_estado;
int main()
{
	MYSQL* conectar;
	conectar = mysql_init(0);
	conectar = mysql_real_connect(conectar, "root", "Local_user", "@t49215664T", "empresa", 3306, NULL, 0);
	if (conectar) {
		cout << "conexion exitosa" <<endl;
		string idProductos;
			cout << "Ingrese Producto:	";
				cin >> idProductos;
		string insert = "insert into productos(idProductos) values ('" + idProductos + "')";
		const char* i = insert.c_str();
		q_estado = mysql_query(conectar, i);
		if (!q_estado) {
			cout << "ingreso exitoso" << endl;
			}
		else {
			cout << "ingreso no exitoso" << endl;
		}

	else
	{
		cout << "error de la conexion" << endl;
	}

	string idProductos;
	cout << "busque el Producto:	";
	cin >> idProductos;
	string search = "search into productos(idProductos) values ('" + idProductos + "')";
	const char* i = search.c_str();
	q_estado = mysql_query(conectar, i);
	if (!q_estado) {
		cout << "busqueda exitosa" << endl;
	}
	else {
		cout << "busqueda no exitosa" << endl;
	}



		string idProductos;
		cout << "Actualice el Producto:	";
		cin >> idProductos;
		string update = "update into productos(idProductos) values ('" + idProductos + "')";
		const char* i = update.c_str();
		q_estado = mysql_query(conectar, i);
		if (!q_estado) {
			cout << "actualizacion exitosa" << endl;
		}
		else {
			cout << "actualizacion no exitosa" << endl;
		}

		string idProductos;
		cout << "Ingrese Producto a eliminar:	";
		cin >> idProductos;
		string delete = "delete into productos(idProductos) values ('" + idProductos + "')";
		cout << "Ingrese el idProducto a eliminar: ";
		cin >> i;
		string delete = "delete from idProducto.productos where idProducto= 'i'";
		const char* i = delete.c_str();
		q_estado = mysql_query(conectar, i);

		if (!q_estado) {
			cout << "Eliminado Exitoso" << endl;
		}
		else {
			cout << "Error al Eliminar" << endl;
		}

	
	system("pause");
	return 0;
		}