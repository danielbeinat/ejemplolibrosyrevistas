#include <iostream>
#include <stdlib.h>

using namespace std;

class Biblioteca{

private:
    int maxlibros;
    int maxrevistas;

public:
    Biblioteca(int,int);
    void mostrarbiblioteca();






};


Biblioteca::Biblioteca(int _maxlibros,int _maxrevistas){
cout<<"Bienvenidos a la biblioteca"<<endl;
cout<<"---------------------------"<<endl;
maxlibros = _maxlibros;
maxrevistas = _maxrevistas;


}


void Biblioteca::mostrarbiblioteca(){

cout<<"maximo de libros: "<<maxlibros<<endl;
cout<<"maximo de revistas: "<<maxrevistas<<endl;



}


class Volumen{
private:
    string nombre;
    int numvol;

public:
    Volumen(string,int);
    virtual void mostrar();





};



Volumen::Volumen(string _nombre, int _numvol){
nombre = _nombre;
numvol = _numvol;

}


void Volumen::mostrar(){

cout<<"Nombre: "<<nombre<<endl;
cout<<"Volumen: "<<numvol<<endl;



}



class Libro: public Volumen{

private:
    int numlibros;
public:
    Libro(string,int,int);
    void mostrar();



};


Libro::Libro(string _nombre, int _numvol,int _numlibros):Volumen(_nombre,_numvol){

numlibros =_numlibros;



}



void Libro::mostrar(){

Volumen::mostrar();
cout<<"numero de libros: "<<numlibros<<endl;



}



class Revistas:public Volumen{
private:
    int numrevistas;
public:
    Revistas(string,int,int);
    void mostrar();




};


Revistas::Revistas(string _nombre, int _numvol,int _numrevistas): Volumen(_nombre,_numvol){

numrevistas = _numrevistas;



}


void Revistas::mostrar(){


Volumen::mostrar();
cout<<"Numero de revistas: "<<numrevistas<<endl;


}





int main()
{

    Biblioteca biblioteca(1,1);
    biblioteca.mostrarbiblioteca();

    cout<<endl;

     Volumen *volumen[1];
     volumen[0]= new Libro("borges ficciones",2,3);
     volumen[0]->mostrar();

     cout<<endl;
     volumen[1]= new Revistas("la capital ",4,1);
     volumen[1]->mostrar();

}
