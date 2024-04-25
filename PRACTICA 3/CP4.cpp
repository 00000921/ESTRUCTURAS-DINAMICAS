#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct nodo
{
    string modelo;
    string placa;
    string color;
};

int main (){

    stack<nodo> piladedatos;
    nodo undato;
    int n;

    cout << "Ingrese la cantidad de Vehiculos que desea agregar: " <<endl;
    cin >> n; cin.ignore();

    cout << "Ingrese los datos de " << n << " vehiculos" <<endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Modelo: " ; cin >> undato.modelo;
        cout << "Placa: " ; cin >> undato.placa;
        cout << "Color: " ; cin >> undato.color;

        piladedatos.push(undato);
    }
        cout << "\nLista de datos:" <<endl;

        while (!piladedatos.empty())
        {
            nodo datoanterior = piladedatos.top();
            cout << "Modelo: " << datoanterior.modelo <<endl;
            cout << "Placa: " << datoanterior.placa <<endl;
            cout << "Color: " << datoanterior.color <<endl;
            piladedatos.pop();
        }
        
    return 0;
}