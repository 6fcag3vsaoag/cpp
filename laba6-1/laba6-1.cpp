#include <iostream>
#include <vector>

using namespace std;

// Проверяет смену знака между двумя элементами
bool isSignChange(double prev, double current) {
    if ((prev >= 0 && current < 0) || (prev < 0 && current >= 0)) {
        return true;
    }
    return false;
}

// Определяет позиции изменений знака и выводит их
void findAndPrintSignChanges(const vector<double>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (isSignChange(arr[i - 1], arr[i])) {
            cout << "Изменение знака произошло на позиции " << i + 1 << endl;
        }
    }
}

// Основная функция для запуска процесса обработки массива
void processArray(const vector<double>& inputData) {
    size_t count = 0;
    for (size_t i = 1; i < inputData.size(); ++i) {
        if (isSignChange(inputData[i - 1], inputData[i])) {
            count++;
        }
    }

    cout << "Количество смен знаков: " << count << endl;
    findAndPrintSignChanges(inputData);
}

int main() {
    setlocale(LC_ALL, "Russian");

    const size_t arraySize = 15;
    vector<double> data(arraySize);

    // Заполняем массив случайными числами (для примера)
    srand(time(nullptr));
    for (size_t i = 0; i < arraySize; ++i) {
        data[i] = static_cast<double>(rand()) / RAND_MAX * 100 - 50; // Числа от -50 до 50
    }

    // Выводим исходный массив
    cout << "Исходный массив:" << endl;
    for (const auto& val : data) {
        cout << val << ' ';
    }
    cout << endl;

    // Обрабатываем массив
    processArray(data);

    return 0;
}