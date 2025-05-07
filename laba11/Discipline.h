#pragma once
#pragma once
#include <iostream>
#include <string>

using namespace std;

// Абстрактный базовый класс Discipline
class Discipline {
protected:
    string name;

public:
    Discipline(const string& name = "");
    virtual ~Discipline() = default;

    // Сеттер и геттер
    void setName(const string& name);
    string getName() const;

    // Чисто виртуальные методы
    virtual int calculateHours() const = 0;
    virtual void printInfo(ostream& out) const = 0;
};

// Производный класс AcademicDiscipline
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

    // Реализация виртуальных методов
    int calculateHours() const override;
    void printInfo(ostream& out) const override;
};

// Производный класс PracticalDiscipline
class PracticalDiscipline : public Discipline {
private:
    int hours_practice;

public:
    PracticalDiscipline(const string& name = "", int practice = 0);

    // Сеттер и геттер
    void setPractice(int hours);
    int getPractice() const;

    // Реализация виртуальных методов
    int calculateHours() const override;
    void printInfo(ostream& out) const override;
};