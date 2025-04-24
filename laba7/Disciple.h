#pragma once
#include <iostream>
#include <string>
using namespace std;
// ����� Disciple
// �������� ���������� � ����������, ������� �������� � ���������� ����� ������, 
// �������� � ������������ �����
// 
// ����������� Disciple
// ��������� �������� ���������� � ���������� ����� ������, 
// �������� � ������������ �����
// ����� getName
// ���������� �������� ����������
// ����� GetHours
// ���������� ����� ���������� �����, ������� ������, �������� � ������������ ������


class Disciple
{
private:
	string name;
	int hours_lectures;
	int hours_practice;
	int hours_labs;

public:
	//�������
	void setName(string name);
	void setLectures(int hours_lectures);
	void setPractice(int hours_practice);
	void setLabs(int hours_labs);

	//�������
	string getName();
	int GetHours();
};

