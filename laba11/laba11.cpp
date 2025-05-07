#include <iostream>
#include "Discipline.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // Создание объектов производных классов
    AcademicDiscipline oop("ООП на C++", 30, 30, 30);
    PracticalDiscipline project("Проектная деятельность", 60);

    // Массив указателей на базовый класс
    Discipline* disciplines[] = { &oop, &project };

    // Демонстрация полиморфизма
    cout << "Демонстрация полиморфизма:\n";
    for (const auto* discipline : disciplines) {
        discipline->printInfo(cout);
        cout << endl;
    }

    // Изменение значений
    oop.setLectures(40);
    project.setPractice(80);

    // Повторный вывод
    cout << "\nПосле изменения:\n";
    for (const auto* discipline : disciplines) {
        discipline->printInfo(cout);
        cout << endl;
    }

    return 0;
}