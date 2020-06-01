
#include <iostream>
#include <vector>
using namespace std;

int main()
{ 

    int dimension;
    cin >> dimension;
    
    int** arreglo = new int* [dimension];
    for (int i = 0; i < dimension; i++) {
        arreglo[i] = new int[dimension];
    }
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            arreglo[i][j] = 0;
            cout << arreglo[i][j] <<endl;
        }
    }
    printf("%d. x %d.",dimension,dimension);
}

