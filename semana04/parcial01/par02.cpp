#include <iostream>
#include <vector>
#include <limits> // Para std::numeric_limits
using namespace std;
void findMinMax(const std::vector<std::vector<int>>& matrix, int& min, int& max) {
    // Inicializar minVal y maxVal con valores extremos
    min = numeric_limits<int>::max();
    max = numeric_limits<int>::min();

    // Recorrer cada fila de la matriz
    for (const auto& row : matrix) {
        // Recorrer cada elemento de la fila
        for (int element : row) {
            if (element < min) {
                min = element; // Actualizar el mínimo
            }
            if (element > max) {
                max = element; // Actualizar el máximo
            }
        }
    }
}

int main() {
    // Definir una matriz bidimensional
    vector<std::vector<int>> matrix = {
        {3, 5, 1, 7},
        {7, 2, 8, 2},
        {4, 6, 5, 1},
        {4, 8, 9, 6}
    };

    int min, max;
    
    // Llamar a la función para encontrar el mínimo y máximo
    findMinMax(matrix, min, max);

    cout << "Minimo = " << min << ", Maximo = " << max << std::endl;

    return 0;
}