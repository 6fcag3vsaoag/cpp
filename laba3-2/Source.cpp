#include <iostream>
#include <cmath>    // Для pow()
#include <iomanip>  // Для setprecision
using namespace std;

int main() {
    // Установка русской локализации
    setlocale(LC_ALL, "Russian");

    int k; // Натуральное число k
    double S = 0.0; // Переменная для хранения суммы

    // Ввод данных пользователем
    cout << "Введите натуральное число k: ";
    cin >> k;

    // Проверка корректности ввода
    if (k <= 0) {
        cout << "Число k должно быть натуральным (больше 0)!" << endl;
        return 1; // Завершение программы с ошибкой
    }

    // Вычисление суммы S
    for (int n = 1; n <= k; ++n) {
        // Вычисляем (-1)^(n+1)
        int sign = (n % 2 == 0) ? -1 : 1; // Если n четное, sign = -1, иначе sign = 1

        // Добавляем слагаемое к сумме
        S += sign / pow(n, 2);
    }

    // Вывод результата с точностью до 6 знаков после запятой
    cout << "Значение S = " << fixed << setprecision(6) << S << endl;

    return 0;
}