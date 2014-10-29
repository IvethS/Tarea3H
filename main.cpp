#include <iostream>
#include <string>

using namespace std;

class Animal{
//En esta parte se aca lo que se realizo fue declarar las variables que vamos utilizar en cada constructor
	// y las variables tipo string que son las que devolvera cada funcion de las tres
public:
string nombre;
int edad;
string maullar;
string ladrar;

//aqui se crea un constructor vacio para Animal
Animal()
{

}
//Aqui esta la funcion que obtiene el nombre y nos devuelve esa variable.
string getNombre(){
return nombre;

}

//La funcion que obtiene la edad y nos devuelve la edad.
int getEdad(){
	return edad;
}

//aqui lo que hace es establecer el nombre y manda a llamar la variable de la misma.
void setNombre(string name)
{
	nombre=name;
}

//aqui lo que hace es establecer el edad y manda a llamar la variable de la edad.
void setEdad(int eda){
	edad=eda;
}


};
//aqui es donde se realiza la herencia si se fijan hacemos la clase perro y de extiende al animal
//luego se manda a llamar perro y se llaman las variables
// y se crea la funcion de gua.
class Perro : public  Animal
{
public:
	Perro(string nombre, int edad)
	{
		setNombre(nombre);
		setEdad(edad);
	}

	string ladrar()
	{
		return "guau";
	}
};
//aqui es donde se realiza la herencia hacemos la clase gato y de extiende al animal
//luego se manda a llamar gato y se llaman las variables
//y se crea la funcion de miau.
class Gato  : public Animal
{
public:
	Gato(string nombre, int edad)
	{
		setNombre(nombre);
		setEdad(edad);
	}
	string maullar()
	{
		return "miua";
	}
};




int main()
{

Gato p = Gato("gege",15);
		p.setNombre("Puky");
		p.setEdad(10);
		cout<<"Nombre del Gato:"<<p.getNombre()<<endl;
		cout<<"Edad del Gato:"<<p.getEdad()<<endl;
cout<<"sonido del gato: "<<p.maullar()<<endl;

Perro s = Perro("gege",15);
		s.setNombre("Snoopy");
		s.setEdad(10);
		cout<<"Nombre del Perro:"<<s.getNombre()<<endl;
		cout<<"Edad del Perro:"<<s.getEdad()<<endl;
		cout<<"sonido del perro: "<<s.ladrar()<<endl;
		   return 0;

}
