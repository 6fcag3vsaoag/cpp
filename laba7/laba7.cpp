#include <iostream>
#include "Disciple.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Создание объекта через указатель
    Disciple* OOP = new Disciple(); // Объект на куче

    // Установка значений через сеттеры
    OOP->setName("Объектно-ориентированное Программирование на C++");
    OOP->setLectures(30);
    OOP->setPractice(30);
    OOP->setLabs(30);

    // Вывод информации
    cout << "Дисциплина: " << OOP->getName() << endl;
    cout << "Общее количество часов: " << OOP->GetHours() << endl;

	// Освобождение памяти так как создан объект на куче
    delete OOP;

    return 0;
}
