#include "Discipline.h"

// Реализация Discipline
Discipline::Discipline(const string& name, int hours) : name(name), total_hours(hours) {}

void Discipline::setName(const string& name) {
    this->name = name;
}

void Discipline::setTotalHours(int hours) {
    total_hours = hours;
}

string Discipline::getName() const {
    return name;
}

int Discipline::getTotalHours() const {
    return total_hours;
}

int Discipline::calculateHours() const {
    return total_hours;
}

ostream& operator<<(ostream& out, const Discipline& discipline) {
    out << "Дисциплина: " << discipline.name << ", Общее количество часов: " << discipline.calculateHours();
    return out;
}

// Реализация AcademicDiscipline
AcademicDiscipline::AcademicDiscipline(const string& name, int lectures, int practice, int labs)
    : Discipline(name, lectures + practice + labs), hours_lectures(lectures), hours_practice(practice), hours_labs(labs) {
}

void AcademicDiscipline::setLectures(int hours) {
    hours_lectures = hours;
    total_hours = calculateHours();
}

void AcademicDiscipline::setPractice(int hours) {
    hours_practice = hours;
    total_hours = calculateHours();
}

void AcademicDiscipline::setLabs(int hours) {
    hours_labs = hours;
    total_hours = calculateHours();
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

// Реализация PracticalDiscipline
PracticalDiscipline::PracticalDiscipline(const string& name, int practice)
    : Discipline(name, practice), hours_practice(practice) {
}

void PracticalDiscipline::setPractice(int hours) {
    hours_practice = hours;
    total_hours = calculateHours();
}

int PracticalDiscipline::getPractice() const {
    return hours_practice;
}

int PracticalDiscipline::calculateHours() const {
    return hours_practice; // Учитываются только часы практики
}