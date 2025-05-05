#pragma once
#include <iostream>
#include <string>
using namespace std;

class Disciple
{
private:
    string name;
    int hours_lectures;
    int hours_practice;
    int hours_labs;

public:
    // ������������
    Disciple(); // ����������� �� ���������
    Disciple(string name, int lectures, int practice, int labs); // ����������� � �����������

    // ����������
    ~Disciple();

    // ������������� ������ ������
    void print() const;
    void print(string prefix) const;

    // �������
    void setName(string name);
    void setLectures(int hours_lectures);
    void setPractice(int hours_practice);
    void setLabs(int hours_labs);

    // �������
    string getName();
    int GetHours() const;
};