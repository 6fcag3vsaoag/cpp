#include <iostream>
#include <vector>
#include <locale> // Для поддержки русской локализации

using namespace std;

int main() {
    // Устанавливаем русскую локализацию
    setlocale(LC_ALL, "Russian");

    // Задаем размеры массивов
    const int sizeM = 8;
    const int sizeL = 7;
    const int sizeC = 9;

    // Инициализируем массивы M, L и C
    vector<int> M(sizeM);
    vector<int> L(sizeL);
    vector<int> C(sizeC);

    // Задаем значения массива M
    cout << "Введите элементы массива M (8 элементов): ";
    for (int i = 0; i < sizeM; ++i) {
        cin >> M[i];
    }

    // Задаем значения массива L
    cout << "Введите элементы массива L (7 элементов): ";
    for (int j = 0; j < sizeL; ++j) {
        cin >> L[j];
    }

    // Задаем значения массива C
    cout << "Введите элементы массива C (9 элементов): ";
    for (int k = 0; k < sizeC; ++k) {
        cin >> C[k];
    }

    // Вычисляем произведение (m_i - 1) для массива M
    long long productM = 1;
    for (int i = 0; i < sizeM; ++i) {
        productM *= (M[i] - 1);
    }

    // Вычисляем произведение (c_k - 5) для массива C
    long long productC = 1;
    for (int k = 0; k < sizeC; ++k) {
        productC *= (C[k] - 5);
    }

    // Вычисляем произведение l_j для массива L
    long long productL = 1;
    for (int j = 0; j < sizeL; ++j) {
        productL *= L[j];
    }

    // Вычисляем произведение m_i для массива M
    long long productM2 = 1;
    for (int i = 0; i < sizeM; ++i) {
        productM2 *= M[i];
    }

    // Вычисляем значение Z
    double Z = static_cast<double>(productM + productC) / (productL - productM2);

    // Выводим результат
    cout << "Значение Z: " << Z << endl;

    return 0;
}