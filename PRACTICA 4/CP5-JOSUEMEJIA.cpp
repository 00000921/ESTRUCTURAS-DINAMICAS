#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct nodo
{
    int edad;
    string nombre;
    nodo*siguiente;
};

int main (){
    double promedio=0;
    stack<nodo> piladedatos;
    nodo undato;
    int n;

    cout << "Ingrese la cantidad de datos que desea agregar: " <<endl;
    cin >> n;

    cout << "Ingrese " << n << " datos:" <<endl;

    for (int i = 0; i < n; i++)
    {
        cout << "nombre: " ; cin >> undato.nombre;
        cout << "Edad: "; cin >> undato.edad; 

        piladedatos.push(undato);

        promedio += undato.edad;

    }
        cout << "\nLista de datos:" <<endl;
        

        while (!piladedatos.empty())
        {
            nodo datoanterior = piladedatos.top();
            cout << "Nombre: " << datoanterior.nombre <<endl;
            cout << "Edad: " <<datoanterior.edad << endl;
            piladedatos.pop();
        }
    
    promedio /= n;
    
    cout<<"El promedio de edad es: "<<promedio;

return 0;
}