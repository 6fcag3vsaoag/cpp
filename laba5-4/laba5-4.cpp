#include <iostream>
#include <string>
#include <cctype>
#include <clocale> // Для настройки локали

int main() {
    setlocale(LC_ALL, ""); // Устанавливаем локаль системы

    std::string text;
    int sum = 0;

    // Ввод текста от пользователя
    std::cout << "Введите текст: ";
    getline(std::cin, text);

    for (char c : text) {
        if (isdigit(c)) { // Проверяем, является ли символ цифрой
            sum += c - '0'; // Преобразуем символ в число и добавляем к сумме
        }
    }

    std::cout << "Сумма цифр в тексте: " << sum << std::endl;

    return 0;
}