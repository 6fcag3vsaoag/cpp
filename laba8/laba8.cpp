#include <iostream>
#include "Disciple.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Создание объектов через указатели
    Disciple* d1 = new Disciple(); // Конструктор по умолчанию
    d1->print("d1");

    Disciple* d2 = new Disciple("Математика", 20, 10, 15); // Конструктор с параметрами
    d2->print("d2");

    // Использование сеттеров
    Disciple* d3 = new Disciple();
    d3->setName("Физика");
    d3->setLectures(25);
    d3->setPractice(15);
    d3->setLabs(10);
    d3->print();

    // Проверка некорректных данных
    Disciple* d4 = new Disciple();
    d4->setName(""); // Название не задано
    d4->setLectures(-5); // Отрицательное значение
    d4->print();

    // Освобождение памяти
    delete d1;
    delete d2;
    delete d3;
    delete d4;

    return 0;
}