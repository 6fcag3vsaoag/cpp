#include <iostream>
#include <vector>

using namespace std;

// Функция для замены элементов в одномерном массиве
void process1DArray(vector<int>& arr, int a, int b) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] >= a && arr[i] <= b) {
            arr[i] = 0;
        }
    }
}

// Функция для замены элементов в двумерном массиве
void process2DArray(vector<vector<int>>& arr, int a, int b) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            if (arr[i][j] >= a && arr[i][j] <= b) {
                arr[i][j] = 0;
            }
        }
    }
}

// Функция для вывода одномерного массива
void print1DArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Функция для вывода двумерного массива
void print2DArray(const vector<vector<int>>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Устанавливаем русскую локализацию
    setlocale(LC_ALL, "Russian");

    // Одномерный массив
    int n;
    cout << "Введите количество элементов в последовательности: ";
    cin >> n;

    vector<int> arr1D(n);
    cout << "Введите элементы последовательности: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr1D[i];
    }

    // Двумерный массив
    int rows, cols;
    cout << "Введите количество строк и столбцов: ";
    cin >> rows >> cols;

    vector<vector<int>> arr2D(rows, vector<int>(cols));
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr2D[i][j];
        }
    }

    int a, b;
    cout << "Введите границы интервала [a, b]: ";
    cin >> a >> b;

    // Обработка и вывод одномерного массива
    process1DArray(arr1D, a, b);
    cout << "\nРезультат для одномерного массива: \n";
    print1DArray(arr1D);

    // Обработка и вывод двумерного массива
    process2DArray(arr2D, a, b);
    cout << "\nРезультат для двумерного массива: \n" << endl;
    print2DArray(arr2D);

    return 0;
}