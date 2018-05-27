#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre = "Juan Lopez";
    cout << sizeof(nombre) << endl;
    cout << nombre.size() << endl;
    cout << nombre[0] << endl;


/*                                  */

    cout << "--------------------------" << endl;

    string nombre1;
    cout << "Nombre: ";
    cin >> nombre1;
    cout << "Hola: " << nombre1 << endl;

    cout << "--------------------------" << endl;



    return 0;
}
