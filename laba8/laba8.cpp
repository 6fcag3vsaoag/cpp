#include <iostream>
#include "Disciple.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Конструктор по умолчанию
    Disciple d1;
    d1.print("d1");

    // Конструктор с параметрами
    Disciple d2("Математика", 20, 10, 15);
    d2.print("d2");

    // Использование сеттеров
    Disciple d3;
    d3.setName("Физика");
    d3.setLectures(25);
    d3.setPractice(15);
    d3.setLabs(10);
    d3.print();

    // Проверка некорректных данных
    Disciple d4;
    d4.setName(""); // Название не задано
    d4.setLectures(-5); // Отрицательное значение
    d4.print();

    return 0;
}