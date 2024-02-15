/**
 * @file main.cpp
 * @brief Programa en C++ para leer una matriz de 3x3 y crear su matriz transpuesta.
 * @author Ricardo Misael Mejia Lopez
 */

#include <iostream>

using namespace std;

/**
 * @brief Función para leer una matriz de 3x3 desde la entrada estándar.
 * @param[out] matriz La matriz de 3x3 leída desde la entrada estándar.
 */
void leerMatriz(int matriz[3][3]) {
    cout << "Introduce los elementos de la matriz 3x3:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

/**
 * @brief Función para imprimir una matriz de 3x3.
 * @param[in] matriz La matriz de 3x3 que se imprimirá.
 */
void imprimirMatriz(const int matriz[3][3]) {
    cout << "\nLa matriz es:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}

/**
 * @brief Función para calcular la matriz transpuesta de una matriz de 3x3.
 * @param[in] matriz La matriz de 3x3 de la cual se calculará la transpuesta.
 * @param[out] transpuesta La matriz transpuesta resultante.
 */
void calcularTranspuesta(const int matriz[3][3], int transpuesta[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transpuesta[i][j] = matriz[j][i];
        }
    }
}

/**
 * @brief Función principal del programa.
 * @return 0 si la ejecución fue exitosa.
 */
int main() {
    int matriz[3][3];
    
    leerMatriz(matriz);
    
    imprimirMatriz(matriz);
    
    int transpuesta[3][3];
    calcularTranspuesta(matriz, transpuesta);
    
    cout << "\nLa matriz transpuesta es:\n";
    imprimirMatriz(transpuesta);
    
    return 0;
}
