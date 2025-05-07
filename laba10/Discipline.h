#pragma once
#include <iostream>
#include <string>

using namespace std;

// ������� ����� Discipline
class Discipline {
protected:
    string name;
    int total_hours;

public:
    Discipline(const string& name = "", int hours = 0);
    virtual ~Discipline() = default;

    // �������
    void setName(const string& name);
    void setTotalHours(int hours);

    // �������
    string getName() const;
    int getTotalHours() const;

    // ����������� ����� ��� ���������� �����
    virtual int calculateHours() const;

    // ���������� ��������� ������
    friend ostream& operator<<(ostream& out, const Discipline& discipline);
};

// �������� ����� AcademicDiscipline
class AcademicDiscipline : public Discipline {
private:
    int hours_lectures;
    int hours_practice;
    int hours_labs;

public:
    AcademicDiscipline(const string& name = "", int lectures = 0, int practice = 0, int labs = 0);

    // �������
    void setLectures(int hours);
    void setPractice(int hours);
    void setLabs(int hours);

    // �������
    int getLectures() const;
    int getPractice() const;
    int getLabs() const;

    // ��������������� ������ ���������� �����
    int calculateHours() const override;
};

// �������� ����� PracticalDiscipline
class PracticalDiscipline : public Discipline {
private:
    int hours_practice;

public:
    PracticalDiscipline(const string& name = "", int practice = 0);

    // ������ � ������ ��� ��������
    void setPractice(int hours);
    int getPractice() const;

    // ����������� ������ ���������� �����
    int calculateHours() const override;
};