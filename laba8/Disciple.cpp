#include "Disciple.h"
#include <iostream>

using namespace std;

// Конструктор по умолчанию
Disciple::Disciple() : name(""), hours_lectures(0), hours_practice(0), hours_labs(0) {}

// Конструктор с параметрами
Disciple::Disciple(string name, int lectures, int practice, int labs)
    : name(""), hours_lectures(0), hours_practice(0), hours_labs(0)
{
    setName(name);
    setLectures(lectures);
    setPractice(practice);
    setLabs(labs);
}

// Деструктор
Disciple::~Disciple() {
    cout << "Деструктор вызван для " << name << endl;
}

void Disciple::print() const {
    cout << "Дисциплина: " << name << endl;
    cout << "Лекции: " << hours_lectures << endl;
    cout << "Практика: " << hours_practice << endl;
    cout << "Лабы: " << hours_labs << endl;
    cout << "Всего часов: " << GetHours() << endl; 
}

void Disciple::print(string prefix) const {
    cout << prefix << " Дисциплина: " << name << endl;
    cout << prefix << " Всего часов: " << GetHours() << endl; 
}

// Реализация сеттеров с проверкой данных
void Disciple::setName(string name) {
    if (!name.empty()) {
        this->name = name;
    }
    else {
        this->name = "Без названия";
    }
}

void Disciple::setLectures(int hours_lectures) {
    if (hours_lectures >= 0) {
        this->hours_lectures = hours_lectures;
    }
    else {
        this->hours_lectures = 0;
    }
}

void Disciple::setPractice(int hours_practice) {
    if (hours_practice >= 0) {
        this->hours_practice = hours_practice;
    }
    else {
        this->hours_practice = 0;
    }
}

void Disciple::setLabs(int hours_labs) {
    if (hours_labs >= 0) {
        this->hours_labs = hours_labs;
    }
    else {
        this->hours_labs = 0;
    }
}

// Геттеры
string Disciple::getName() {
    return name;
}

int Disciple::GetHours() const {
    return hours_lectures + hours_practice + hours_labs;
}