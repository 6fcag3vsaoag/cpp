#include <iostream>
#include <vector>

using namespace std;

// Функция для ввода элементов вектора
void inputVector(vector<int>& vec, int size, const string& name) {
    cout << "Введите элементы массива " << name << " (" << size << " элементов): ";
    for (int i = 0; i < size; ++i) {
        cin >> vec[i];
    }
}

// Функция для вычисления произведения (m_i - 1) для массива M
double calcMProduct(const vector<int>& M, int size) {
    double product = 1.0;
    for (int i = 0; i < size; ++i) {
        product *= (M[i] - 1);
    }
    return product;
}

// Функция для вычисления произведения (c_k - 5) для массива C
double calcCProduct(const vector<int>& C, int size) {
    double product = 1.0;
    for (int k = 0; k < size; ++k) {
        product *= (C[k] - 5);
    }
    return product;
}

// Функция для вычисления произведения l_j для массива L
double calcLProduct(const vector<int>& L, int size) {
    double product = 1.0;
    for (int j = 0; j < size; ++j) {
        product *= L[j];
    }
    return product;
}

// Функция для вычисления произведения m_i для массива M
double calcMDirectProduct(const vector<int>& M, int size) {
    double product = 1.0;
    for (int i = 0; i < size; ++i) {
        product *= M[i];
    }
    return product;
}

// Функция для вычисления значения Z
double calcZ(double productM, double productC, double productL, double productM2) {
    double Z = (productM + productC) / (productL - productM2);
    return Z;
}

int main() {
    setlocale(LC_ALL, "Russian");

    // Задаем размеры массивов
    const int sizeM = 8;
    const int sizeL = 7;
    const int sizeC = 9;

    // Инициализируем массивы M, L и C
    vector<int> M(sizeM);
    vector<int> L(sizeL);
    vector<int> C(sizeC);

    // Ввод элементов массивов
    inputVector(M, sizeM, "M");
    inputVector(L, sizeL, "L");
    inputVector(C, sizeC, "C");

    // Вычисляем произведения
    double productM = calcMProduct(M, sizeM);
    double productC = calcCProduct(C, sizeC);
    double productL = calcLProduct(L, sizeL);
    double productM2 = calcMDirectProduct(M, sizeM);

    // Вычисляем значение Z
    double Z = calcZ(productM, productC, productL, productM2);

    // Выводим результат
    cout << "Значение Z: " << Z << endl;

    return 0;
}

 // M = {1, 2, 2, 2, 2, 2, 2, 2}
 // L = {3, 3, 3, 3, 3, 3, 3} 
 // C = {5, 6, 6, 6, 6, 6, 6, 6, 6}
 // Ожидаемый результат: Z = 0