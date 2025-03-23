#include <iostream>
#include <cmath>    // Дляfabs()
#include <clocale>  // Для setlocale
#include <iomanip>
using namespace std;

int main() {
    // Установка русской локализации
    setlocale(LC_ALL, "Russian");

    double epsilon; // Точность вычисления
    cout << "Введите точность e (e > 0): ";
    cin >> epsilon;

    if (epsilon <= 0) {
        cout << "Точность e должна быть положительным числом!" << endl;
        return 1; // Завершение программы с ошибкой
    }

    int i = 2; // Начало индекса ряда
    double S = 0.0; // Переменная для хранения суммы
    double term; // Текущий член ряда

    // Цикл для вычисления суммы ряда
    while (true) {
        // Вычисляем текущий член ряда
        term = pow(-1, i) / (i * i - 1);

        // Добавляем текущий член к сумме
        S += term;

        // Проверяем, достигнута ли требуемая точность
        if (fabs(term) < epsilon) {
            break; // Если условие выполнено, завершаем цикл
        }

        // Переходим к следующему члену
        ++i;
    }

    // Вывод результата с точностью до 6 знаков после запятой
    cout << fixed << setprecision(6);
    cout << "Сумма ряда с точностью e = " << epsilon << " равна: " << S << endl;

    return 0;
}