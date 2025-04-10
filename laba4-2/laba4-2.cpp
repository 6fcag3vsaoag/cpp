#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Устанавливаем русскую локализацию
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите количество элементов в последовательности: ";
    cin >> n;

    vector<double> arr(n);
    cout << "Введите элементы последовательности: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Находим максимальный элемент в массиве
    double maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Заменяем все максимальные элементы нулями
    for (int i = 0; i < n; ++i) {
        if (arr[i] == maxElement) {
            arr[i] = 0;
        }
    }

    // Выводим результат
    cout << "Результат после замены максимальных элементов нулями: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}