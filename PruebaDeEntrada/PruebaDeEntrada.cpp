

#include <iostream>
using namespace std;
int main()
{
    //Pregunta1
    int numero;
    cin >> numero;
    while (numero <= 0) {
        cout << "El numero no puede ser menor o igual a 0"<<endl;
        cin >> numero;
    }
    if (numero % 9 == 0) {
        cout << "El numero es multiplo de nueve" << endl;
        
    }
    else {
        cout << "numero no es multiplo de 9"<<endl;
    }
    //pregunta 2
    int p1, p2, p3;
    cin >> p1;
    cin >> p2;
    cin >> p3;

    if (p1 > p2 && p1 > p3) {
        cout << "El numero mayor es: " << p1 << endl;
    }
    else if (p2 > p1 && p2 > p3) {
        cout << "El numero mayor es: " << p2 << endl;
    }
    else {
        cout << "El numero mayor es: " << p3 << endl;
    }
    //pregunta 3
    
    for (int i = 1; i < 50; i++) {
        int residuo= i % 10;
        int cociente = i / 10;
        string decenas;
        string unidades;
        if (cociente == 4) {
            decenas= "XL";
        }
        else if (cociente == 3) {
            decenas= "XXX";
        }
        else if (cociente == 2) {
            decenas= "XX";
        }
        else {
            decenas= "X";
        }
        if (residuo == 1) {
            unidades = "I";
        }
        else if (residuo == 2) {
            unidades = "II";
        }
        else if(residuo==3) {
            unidades = "III";
        }
        else if (residuo == 4) {
            unidades = "IV";
        }
        else if (residuo == 5) {
            unidades = "V";
        }
        else if (residuo == 6) {
            unidades = "VI";
        }
        else if (residuo == 7) {
            unidades = "VII";
        }
        else if (residuo == 8) {
            unidades = "VIII";
        }
        else if (residuo == 9) {
            unidades = "IX";
        }
        else {
            unidades = "";
        }
        cout << i << " : " << decenas << unidades << endl;
        
    }

    //pregunta 4
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

