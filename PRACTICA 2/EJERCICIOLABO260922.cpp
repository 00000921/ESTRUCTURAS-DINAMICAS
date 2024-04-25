#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct nodo
{
    int id;
    string nombre;
    nodo*siguiente;
};

int main (){

    stack<nodo> piladedatos;
    nodo undato;
    int n;

    cout << "Ingrese la cantidad de datos que desea agregar: " <<endl;
    cin >> n;

    cout << "Ingrese los datos de " << n << " cantidad de pilas:" <<endl;

    for (int i = 0; i < n; i++)
    {
        cout << "nombre: " ; cin >> undato.nombre;
        cout << "Id: "; cin >> undato.id; 

        piladedatos.push(undato);
    }
        cout << "\nLista de datos:" <<endl;

        while (!piladedatos.empty())
        {
            nodo datoanterior = piladedatos.top();
            cout << "Nombre: " << datoanterior.nombre <<endl;
            cout << "Id: " <<datoanterior.id << endl;
            piladedatos.pop();
        }
        
    

    return 0;
}