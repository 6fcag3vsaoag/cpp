#include "Disciple.h"
#include <iostream>

using namespace std;
// Метод установки названия дисциплины
void Disciple::setName(string name) {
	this->name = name;
};

// Метод установки количества часов лекций
void Disciple::setLectures(int hours_lectures) {
	this->hours_lectures = hours_lectures;
};

// Метод установки количества часов практики
void Disciple::setPractice(int hours_practice) {
	this->hours_practice = hours_practice;
};

// Метод установки количества часов лабораторных работ
void Disciple::setLabs(int hours_labs) {
	this->hours_labs = hours_labs;
};

// Метод получения названия дисциплины
string Disciple::getName() {
	return name;
};

// Метод получения общего количества часов
int Disciple::GetHours() {
	return hours_lectures + hours_practice + hours_labs;
};

