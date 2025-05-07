#pragma once
#include <iostream>

class Power2 {
private:
    int exponent; // ������� ����� 2

public:
    // ����������� �� ��������� � � ����������
    Power2(int exp = 0);

    // ��������� �������� �������
    int getExponent() const;

    // ���������� ��������� ��������� ==
    bool operator==(const Power2& other) const;

    // ���������� ����������� ��������� ++
    Power2& operator++();

    // ��������science�� ������������ ��������� ++
    Power2 operator++(int);

    // ���������� �������� ��������� !
    bool operator!() const;

    // ������������� ������� ��� ���������� ��������� ������
    friend std::ostream& operator<<(std::ostream& out, const Power2& power);
};

#endif // POWER2_H