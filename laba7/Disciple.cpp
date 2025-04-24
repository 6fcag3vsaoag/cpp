#include "Disciple.h"
#include <iostream>

using namespace std;
// ����� ��������� �������� ����������
void Disciple::setName(string name) {
	this->name = name;
};

// ����� ��������� ���������� ����� ������
void Disciple::setLectures(int hours_lectures) {
	this->hours_lectures = hours_lectures;
};

// ����� ��������� ���������� ����� ��������
void Disciple::setPractice(int hours_practice) {
	this->hours_practice = hours_practice;
};

// ����� ��������� ���������� ����� ������������ �����
void Disciple::setLabs(int hours_labs) {
	this->hours_labs = hours_labs;
};

// ����� ��������� �������� ����������
string Disciple::getName() {
	return name;
};

// ����� ��������� ������ ���������� �����
int Disciple::GetHours() {
	return hours_lectures + hours_practice + hours_labs;
};

