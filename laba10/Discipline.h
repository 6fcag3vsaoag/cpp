#pragma once
#include <iostream>
#include <string>

using namespace std;

// Базовый класс Discipline
class Discipline {
protected:
    string name;
    int total_hours;

public:
    Discipline(const string& name = "", int hours = 0);
    virtual ~Discipline() = default;

    // Сеттеры
    void setName(const string& name);
    void setTotalHours(int hours);

    // Геттеры
    string getName() const;
    int getTotalHours() const;

    // Виртуальный метод для вычисления часов
    virtual int calculateHours() const;

    // Перегрузка оператора вывода
    friend ostream& operator<<(ostream& out, const Discipline& discipline);
};

// Дочерний класс AcademicDiscipline
class AcademicDiscipline : public Discipline {
private:
    int hours_lectures;
    int hours_practice;
    int hours_labs;

public:
    AcademicDiscipline(const string& name = "", int lectures = 0, int practice = 0, int labs = 0);

    // Сеттеры
    void setLectures(int hours);
    void setPractice(int hours);
    void setLabs(int hours);

    // Геттеры
    int getLectures() const;
    int getPractice() const;
    int getLabs() const;

    // Переопределение метода вычисления часов
    int calculateHours() const override;
};

// Дочерний класс PracticalDiscipline
class PracticalDiscipline : public Discipline {
private:
    int hours_practice;

public:
    PracticalDiscipline(const string& name = "", int practice = 0);

    // Сеттер и геттер для практики
    void setPractice(int hours);
    int getPractice() const;

    // Модификация метода вычисления часов
    int calculateHours() const override;
};