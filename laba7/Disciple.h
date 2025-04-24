#pragma once
#include <iostream>
#include <string>
using namespace std;
// Класс Disciple
// Содержит информацию о дисциплине, включая название и количество часов лекций, 
// практики и лабораторных работ
// 
// Конструктор Disciple
// Принимает название дисциплины и количество часов лекций, 
// практики и лабораторных работ
// Метод getName
// Возвращает название дисциплины
// Метод GetHours
// Возвращает общее количество часов, включая лекции, практику и лабораторные работы


class Disciple
{
private:
	string name;
	int hours_lectures;
	int hours_practice;
	int hours_labs;

public:
	//сеттеры
	void setName(string name);
	void setLectures(int hours_lectures);
	void setPractice(int hours_practice);
	void setLabs(int hours_labs);

	//геттеры
	string getName();
	int GetHours();
};

