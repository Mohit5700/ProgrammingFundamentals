#include <iostream>
using namespace std;

#include "Person.h"

int main(){
	string msg = "Hi object";
	Person estudiante; //Instancia de la clase Person
	Person Trabajador = new Person();
	estudiante.greet(); //llamada a la funci�n greet
	estudiante.customGreet(msg); //Llamada a la funci�n customGreet
	estudiante.asignarNombre("Michael");
	estudiante.asignarApellido("Holland");
	estudiante.asignarEdad(25);
	cout<<"Nombre: "<<estudiante.getName()<<endl;
	cout<<"Edad: "<<estudiante.getAge()<<endl;
	estudiante.imprimirInfo();
}
