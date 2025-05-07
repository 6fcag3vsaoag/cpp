#include "Discipline.h"

// Реализация Discipline
Discipline::Discipline(const string& name) : name(name) {}

void Discipline::setName(const string& name) {
    this->name = name;
}

string Discipline::getName() const {
    return name;
}

// Реализация AcademicDiscipline
AcademicDiscipline::AcademicDiscipline(const string& name, int lectures, int practice, int labs)
    : Discipline(name), hours_lectures(lectures), hours_practice(practice), hours_labs(labs) {
}

void AcademicDiscipline::setLectures(int hours) {
    hours_lectures = hours;
}

void AcademicDiscipline::setPractice(int hours) {
    hours_practice = hours;
}

void AcademicDiscipline::setLabs(int hours) {
    hours_labs = hours;
}

int AcademicDiscipline::getLectures() const {
    return hours_lectures;
}

int AcademicDiscipline::getPractice() const {
    return hours_practice;
}

int AcademicDiscipline::getLabs() const {
    return hours_labs;
}

int AcademicDiscipline::calculateHours() const {
    return hours_lectures + hours_practice + hours_labs;
}

void AcademicDiscipline::printInfo(ostream& out) const {
    out << "Академическая дисциплина: " << name
        << ", Лекции: " << hours_lectures
        << ", Практика: " << hours_practice
        << ", Лабораторные: " << hours_labs
        << ", Всего часов: " << calculateHours();
}

// Реализация PracticalDiscipline
PracticalDiscipline::PracticalDiscipline(const string& name, int practice)
    : Discipline(name), hours_practice(practice) {
}

void PracticalDiscipline::setPractice(int hours) {
    hours_practice = hours;
}

int PracticalDiscipline::getPractice() const {
    return hours_practice;
}

int PracticalDiscipline::calculateHours() const {
    return hours_practice;
}

void PracticalDiscipline::printInfo(ostream& out) const {
    out << "Практическая дисциплина: " << name
        << ", Практика: " << hours_practice
        << ", Всего часов: " << calculateHours();
}