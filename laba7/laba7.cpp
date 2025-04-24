#include <iostream>
#include "Disciple.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	//создание обьекта класса Disciple
	Disciple OOP;

	// установка значений Для обьекта OOP через сеттеры
	OOP.setName("Обьектно-ориентированное Программирование на C++");
	OOP.setLectures(30);
	OOP.setPractice(30);
	OOP.setLabs(30);

	//вывод информации о дисциплине
	cout << "Дисциплина:" << OOP.getName() << endl;
	cout << "Общее Количество часов по дисциплине: " << OOP.GetHours() << endl;

	return 0;

}

