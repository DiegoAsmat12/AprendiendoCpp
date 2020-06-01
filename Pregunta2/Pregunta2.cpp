

#include <iostream>
using namespace std;
int main()
{
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
}

