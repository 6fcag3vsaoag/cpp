﻿#include <iostream>
#include <iomanip> // Для std::setprecision
using namespace std;

int main() {
    // Установка русской локализации
    setlocale(LC_ALL, "Russian");

    int n; // Натуральное число n
    double S = 0.0; // Переменная для хранения суммы

    // Ввод данных пользователем
    cout << "Введите натуральное число n: ";
    cin >> n;

    // Проверка корректности ввода
    if (n <= 0) {
        cout << "Число n должно быть натуральным (больше 0)!" << endl;
        return 1; // Завершение программы с ошибкой
    }

    // Вычисление суммы S
    for (int i = 1; i <= n; ++i) {
        S += 1.0 / i; // Добавляем очередное слагаемое к сумме
    }

    // Вывод результата с точностью до 6 знаков после запятой
    cout << "Сумма S = 1 + 1/2 + 1/3 + ... + 1/" << n << " равна:" << endl;
    cout << fixed << setprecision(6) << S << endl;

    return 0;
}