
#include <iostream>
using namespace std;
bool es_primo(int n);
int fibonacci(int n);
void NumerosPrimosHastaN(int n);

int main()
{
    int n;
    for (int i = 0; i < 25; i++) {
        cout << fibonacci(i) << endl;
    }
    cin >> n;
    NumerosPrimosHastaN(n);
    
}

bool es_primo(int n) {

    for (int j = 2; j < n; j++) {
        if (n % j == 0) return false;
    }
    return true;
}
int fibonacci(int n) {
    if (n >= 0) {
        if (n == 0 || n == 1) {
            return 1;
        }
        else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
    
}
void NumerosPrimosHastaN(int n) {
    for (int j = 2; j < n; j++) {
        if (es_primo(j)) {
            cout << j << " ";
        }
    }
    
}