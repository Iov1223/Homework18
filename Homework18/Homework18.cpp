#include <iostream>
using namespace std;

// ������ 1.
inline double sum(double num1, double num2);

// ������ 2.
int maxEl(int num1, int num2, int num3);
float maxEl(float num1, float num2, float num3);
double maxEl(double num1, double num2, double num3);

// ������ 3.
template <typename T> void showArr(T arr[], int L);
template <typename T> T elMax(T arr[], int L);

int main() {
    setlocale(LC_ALL, "ru");
    double n, m;

    // ������ 1.
    cout << "\t������ 1.\n������� ��� �����: ";
    cin >> n >> m;
    cout << "������� �������������� " << n << " � " << m << " = " << sum(n, m) << "\n\n";

    // ������ 2.
    int a, b, c;
    cout << "\t������ 2.\n������� ��� ����� (INT): ";
    cin >> a >> b >> c;
    cout << "���������� INT ����o �� ������� =  " << maxEl(a, b, c) << endl;

    float x, y, z;
    cout << "������� ��� ����� (FLOAT): ";
    cin >> x >> y >> z;
    cout << "���������� FLOAT ����o �� ������� =  " << maxEl(x, y, z) << endl;

    double f, g, h;
    cout << "������� ��� ����� (DOUBLE): ";
    cin >> f >> g >> h;
    cout << "���������� DOUBLE ����o �� ������� =  " << maxEl(f, g, h) << "\n\n";

    // ������ 3.
    const int L = 10;
    double z31[L] = { 12.365, 89.2563, 14.25, 96.214, 2.3654, 25.4785, 42.1236, 65.32145, 71.112, 200.258 };
    int z32[L] = { 85, 45, 12, 150, 65, 98, 52, 78, 10, 77 };
    float z33[L] = { 45.2, 85.3, 89.1, 0.25, -98.3, 145.25, 36.14, 54.1, 11.54, 73.99 };
    cout << "\t������ 3.\n����������� �������:\n������ DOUBLE: ";
    showArr(z31, L);
    cout << "������ INT: ";
    showArr(z32, L);
    cout << "������ FLOAT: ";
    showArr(z33, L);
    cout << "������������ ����� ������� DOUBLE: " << elMax(z31, L) << endl;
    cout << "������������ ����� ������� INT: " << elMax(z32, L) << endl;
    cout << "������������ ����� ������� FLOAT: " << elMax(z33, L) << endl;

    return 0;
}
// ������ 1.
inline double sum(double num1, double num2) {
    return (num1 + num2) / 2;
}

// ������ 2.
int maxEl(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3)
        return num1;
    if (num1 < num2 && num2 > num3)
        return num2;
    return num3;
}
float maxEl(float num1, float num2, float num3) {
    if (num1 > num2 && num1 > num3)
        return num1;
    if (num1 < num2 && num2 > num3)
        return num2;
    return num3;
}
double maxEl(double num1, double num2, double num3) {
    if (num1 > num2 && num1 > num3)
        return num1;
    if (num1 < num2 && num2 > num3)
        return num2;
    return num3;
}

// ������ 3.
template <typename T> void showArr(T arr[], int L) {
    cout << "[";
    for (int i = 0; i < L; i++)
        cout << arr[i] << ", ";
    cout << "\b\b]\n";
}
template <typename T> T elMax(T arr[], int L) {
    T max = arr[0];
    for (int i = 0; i < L; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}