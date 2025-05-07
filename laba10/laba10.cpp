#include <iostream>
#include "Discipline.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // Создание объектов
    AcademicDiscipline oop("ООП на C++", 30, 30, 30);
    PracticalDiscipline project("Проектная деятельность", 60);

    // Вывод информации
    cout << oop << endl;
    cout << project << endl;

    // Изменение значений
    oop.setLectures(40);
    project.setPractice(80);

    // Повторный вывод
    cout << "\nПосле изменения:\n";
    cout << oop << endl;
    cout << project << endl;

    // Демонстрация полиморфизма
    Discipline* disciplines[] = { &oop, &project };
    cout << "\nПолиморфный вывод:\n";
    for (const auto* discipline : disciplines) {
        cout << *discipline << endl;
    }

    return 0;
}