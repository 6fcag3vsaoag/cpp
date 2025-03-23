#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

// Вспомогательная функция для вычисления факториала
double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Функция для вычисления F(x)
double calculateF(double x, double epsilon, int& n) {
    double sum = 1.0;
    double term;
    n = 1;
    int k = 1;

    do {
        term = pow(-1, k) * pow(x, 2 * k) / (factorial(k) * factorial(k + 2));
        sum += term;
        n++;
        k++;
    } while (abs(term) >= epsilon);

    return sum;
}

int main() {
    setlocale(LC_ALL, "Russian");

    double a = 0.2;
    double b = 0.7;
    double h = 0.1;
    double epsilon;

    cout << "Введите точность e: ";
    cin >> epsilon;

    cout << "| № п/п | Значение x | Значение функции F(x) | Количество просуммированных слагаемых n |" << endl;
    cout << "|-------|------------|------------------------|------------------------------------------|" << endl;

    int count = 1;
    for (double x = a; x <= b; x += h) {
        int n;
        double Fx = calculateF(x, epsilon, n);
        cout << "| " << setw(6) << count++ << " | " << setw(10) << x << " | " << setw(22) << Fx << " | " << setw(40) << n << " |" << endl;
    }

    return 0;
}