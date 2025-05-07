#include "Power2.h"

// �����������
Power2::Power2(int exp) : exponent(exp) {}

// ��������� �������� �������
int Power2::getExponent() const {
    return exponent;
}

// ���������� ��������� ==
bool Power2::operator==(const Power2& other) const {
    return exponent == other.exponent;
}

// ���������� ����������� ++
Power2& Power2::operator++() {
    ++exponent;
    return *this;
}

// ���������� ������������ ++
Power2 Power2::operator++(int) {
    Power2 temp = *this;
    ++exponent;
    return temp;
}

// ���������� �������� ��������� !
bool Power2::operator!() const {
    return exponent == 0;
}

// ���������� ��������� ������
std::ostream& operator<<(std::ostream& out, const Power2& power) {
    out << "2^" << power.exponent << " = " << (1LL << power.exponent);
    return out;
}