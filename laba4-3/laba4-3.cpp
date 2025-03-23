#include <iostream>
#include <vector>
#include <locale> // Для поддержки русской локализации

using namespace std;

int main() {
    // Устанавливаем русскую локализацию
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

    // Подсчитываем сумму элементов на побочной диагонали
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i][n - 1 - i];
    }

    // Выводим результат
    cout << "Сумма элементов на побочной диагонали: " << sum << endl;

    return 0;
}