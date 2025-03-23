#include <iostream>
#include <string>
#include <locale> // Для поддержки русской локализации
#include <windows.h> // Для работы с кодировкой в Windows

using namespace std;

int main() {
    // Устанавливаем русскую локализацию для консоли
    SetConsoleCP(1251); // Устанавливаем кодировку ввода (Windows-1251)
    SetConsoleOutputCP(1251); // Устанавливаем кодировку вывода (Windows-1251)
    setlocale(LC_ALL, "Russian");

    // Вводим строку
    string input;
    cout << "Введите строку: ";
    getline(cin, input);

    // Определяем гласные буквы кириллицы (строчные и заглавные)
    string vowels = "аеёиоуыэюяАЕЁИОУЫЭЮЯ";

    // Счетчик гласных
    int vowelCount = 0;

    // Проходим по каждому символу строки
    for (char ch : input) {
        // Проверяем, является ли символ гласной
        if (vowels.find(ch) != string::npos) {
            vowelCount++;
        }
    }

    // Выводим результат
    cout << "Количество гласных букв в строке: " << vowelCount << endl;

    return 0;
}