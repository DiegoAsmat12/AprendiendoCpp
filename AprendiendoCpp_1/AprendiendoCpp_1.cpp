
#include <iostream>
#include <vector>
using namespace std; //Gracias a STD no es necesario usar std::cout o std::endl

/*static */void Saludo();
string Nombre;
int Factorial(int n);
int main()
{
    cin >> Nombre;
    printf(Nombre.c_str());
    vector<int> Vector = vector<int>(25);
    int array[] = { 1,2,3,4 };
    int matriz[3][2] = { {1,2},{2,3},{3,4} };
    cout << "[ ";
    for (int i=0; i < Vector.size(); i++) {
        Vector[i] = i+1;
        cout<< Vector[i]<< ", ";
        if (i == Vector.size() - 1) {
            cout << Vector[i] << "]"<<endl;
        }
    }
    

    int ValorEntero = 1;
    for (int i = 0; i <= 10; i++) {
        if (i >= 5) {
            cout << "Hello World!"<<endl;
        }
        else {
            std::cout << "Hello World!" << "hi, hi" << "\n" << "Hola broer" << std::endl;
        }
        
    }
    Saludo();
    cout << ValorEntero;
    cout << endl;
    cout << Factorial(5);
    return 0;
}
static void Saludo() {
    cout << "Hi! ";
}
int Factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return n*Factorial(n - 1);
    }
}

