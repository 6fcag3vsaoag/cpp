#include <iostream>
#include <cmath>    // ��� pow()
#include <iomanip>  // ��� setprecision
using namespace std;

int main() {
    // ��������� ������� �����������
    setlocale(LC_ALL, "Russian");

    int k; // ����������� ����� k
    double S = 0.0; // ���������� ��� �������� �����

    // ���� ������ �������������
    cout << "������� ����������� ����� k: ";
    cin >> k;

    // �������� ������������ �����
    if (k <= 0) {
        cout << "����� k ������ ���� ����������� (������ 0)!" << endl;
        return 1; // ���������� ��������� � �������
    }

    // ���������� ����� S
    for (int n = 1; n <= k; ++n) {
        // ��������� (-1)^(n+1)
        int sign = (n % 2 == 0) ? -1 : 1; // ���� n ������, sign = -1, ����� sign = 1

        // ��������� ��������� � �����
        S += sign / pow(n, 2);
    }

    // ����� ���������� � ��������� �� 6 ������ ����� �������
    cout << "�������� S = " << fixed << setprecision(6) << S << endl;

    return 0;
}