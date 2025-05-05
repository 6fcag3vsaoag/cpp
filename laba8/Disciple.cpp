#include "Disciple.h"
#include <iostream>

using namespace std;

// ����������� �� ���������
Disciple::Disciple() : name(""), hours_lectures(0), hours_practice(0), hours_labs(0) {}

// ����������� � �����������
Disciple::Disciple(string name, int lectures, int practice, int labs)
    : name(""), hours_lectures(0), hours_practice(0), hours_labs(0)
{
    setName(name);
    setLectures(lectures);
    setPractice(practice);
    setLabs(labs);
}

// ����������
Disciple::~Disciple() {
    cout << "���������� ������ ��� " << name << endl;
}

void Disciple::print() const {
    cout << "����������: " << name << endl;
    cout << "������: " << hours_lectures << endl;
    cout << "��������: " << hours_practice << endl;
    cout << "����: " << hours_labs << endl;
    cout << "����� �����: " << GetHours() << endl; 
}

void Disciple::print(string prefix) const {
    cout << prefix << " ����������: " << name << endl;
    cout << prefix << " ����� �����: " << GetHours() << endl; 
}

// ���������� �������� � ��������� ������
void Disciple::setName(string name) {
    if (!name.empty()) {
        this->name = name;
    }
    else {
        this->name = "��� ��������";
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

// �������
string Disciple::getName() {
    return name;
}

int Disciple::GetHours() const {
    return hours_lectures + hours_practice + hours_labs;
}