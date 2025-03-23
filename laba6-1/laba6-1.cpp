#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Функция для подсчета количества смен знаков в массиве
int countSignChanges(const vector<double>& arr) {
    int changes = 0;
    double prev_sign = 0.0;

    for (double num : arr) {
        double curr_sign = (num > 0) ? 1 : ((num < 0) ? -1 : 0);

        if (prev_sign == 0 || curr_sign == 0) {
            prev_sign = curr_sign;
            continue;
        }

        if (curr_sign * prev_sign < 0) {
            ++changes;
        }

        prev_sign = curr_sign;
    }

    return changes;
}

// Функция для вывода индексов, где меняется знак
void printChangePositions(const vector<double>& arr) {
    double prev_sign = 0.0;
    size_t index = 0;

    cout << "Позиции смены знака:" << endl;

    for (double num : arr) {
        double curr_sign = (num > 0) ? 1 : ((num < 0) ? -1 : 0);

        if (prev_sign == 0 || curr_sign == 0) {
            prev_sign = curr_sign;
            ++index;
            continue;
        }

        if (curr_sign * prev_sign < 0) {
            cout << index << ", ";
        }

        prev_sign = curr_sign;
        ++index;
    }

    cout << endl;
}

// Основная функция
int main() {
    // Настраиваем локаль для правильного отображения русского текста
    setlocale(LC_ALL, "");

    // Массив вещественных чисел
    vector<double> arr = { -1.5, 2.0, -3.1, 4.2, -5.3, 6.4, -7.5, 8.6, -9.7, 10.8 };

    // Определяем количество изменений знака
    int sign_changes = countSignChanges(arr);
    cout << "Количество изменений знака: " << sign_changes << endl;

    // Выводим позиции изменения знака
    printChangePositions(arr);

    return 0;
}