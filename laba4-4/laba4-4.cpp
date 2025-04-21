#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите размерность массива (n x n): ";
    cin >> n;

    // Создаем двумерный массив размером n x n
    vector<vector<int>> arr(n, vector<int>(n));

    // Вводим элементы массива
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    // Вводим вектор X
    vector<int> X(n);
    cout << "Введите элементы вектора X:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> X[i];
    }

    // Заменяем четные столбцы на вектор X
    for (int j = 1; j < n; j += 2) { // Начинаем с j = 1 (второй столбец) и шагаем через 2
        for (int i = 0; i < n; ++i) {
            arr[i][j] = X[i];
        }
    }

    // Выводим измененный массив
    cout << "Массив после замены четных столбцов на вектор X:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}