#include <iostream>
#include <string>
#include <vector>
#include <locale> // Для поддержки русской локализации
#include <algorithm> // Для использования функции min_element
#include <windows.h> // Для изменения кодировки консоли в Windows

using namespace std;

// Функция для проверки, является ли символ буквой или цифрой (включая кириллицу)
bool isAlphaNumOrApostrophe(char ch) {
    // Проверяем, является ли символ буквой (латиница или кириллица) или цифрой
    return isalnum(ch) || (ch >= 'а' && ch <= 'я') || (ch >= 'А' && ch <= 'Я') || ch == '\'';
}

int main() {
    // Устанавливаем кодировку консоли на Windows-1251 (для корректного ввода/вывода кириллицы)
    SetConsoleCP(1251); // Устанавливаем кодировку ввода
    SetConsoleOutputCP(1251); // Устанавливаем кодировку вывода
    setlocale(LC_ALL, "Russian");

    // Вводим текстовое сообщение
    string message;
    cout << "Введите текстовое сообщение (заканчивается точкой): ";
    getline(cin, message);

    // Удаляем точку в конце сообщения
    if (!message.empty() && message.back() == '.') {
        message.pop_back();
    }

    // Вектор для хранения слов
    vector<string> words;
    string word;
    for (char ch : message) {
        // Если символ является буквой, цифрой или апострофом, добавляем его к текущему слову
        if (isAlphaNumOrApostrophe(ch)) {
            word += ch;
        }
        else {
            // Если слово не пустое, добавляем его в вектор
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        }
    }
    // Добавляем последнее слово, если оно есть
    if (!word.empty()) {
        words.push_back(word);
    }

    // Находим самое короткое слово
    if (!words.empty()) {
        auto shortest = min_element(words.begin(), words.end(),
            [](const string& a, const string& b) {
                return a.length() < b.length();
            });
        cout << "Самое короткое слово: " << *shortest << endl;
    }
    else {
        cout << "В сообщении нет слов." << endl;
    }

    return 0;
}