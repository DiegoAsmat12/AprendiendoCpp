
#include <iostream>
using namespace std;
int main()
{
    int numero;
    cin >> numero;
    while (numero <= 0) {
        cout << "El numero no puede ser menor o igual a 0" << endl;
        cin >> numero;
    }
    if (numero % 9 == 0) {
        cout << "El numero es multiplo de nueve" << endl;

    }
    else {
        cout << "numero no es multiplo de 9" << endl;
    }
}

