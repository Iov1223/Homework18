#include <iostream>
using namespace std;

// Задача 1.
inline double sum(double num1, double num2);

// Задача 2.
int maxEl(int num1, int num2, int num3);
float maxEl(float num1, float num2, float num3);
double maxEl(double num1, double num2, double num3);

// Задача 3.
template <typename T> void showArr(T arr[], int L);
template <typename T> T elMax(T arr[], int L);

int main() {
    setlocale(LC_ALL, "ru");
    double n, m;

    // Задача 1.
    cout << "\tЗадача 1.\nВведите два числа: ";
    cin >> n >> m;
    cout << "Среднее арифметическое " << n << " и " << m << " = " << sum(n, m) << "\n\n";

    // Задача 2.
    int a, b, c;
    cout << "\tЗадача 2.\nВведите три числа (INT): ";
    cin >> a >> b >> c;
    cout << "Наибольшее INT числo из введёных =  " << maxEl(a, b, c) << endl;

    float x, y, z;
    cout << "Введите три числа (FLOAT): ";
    cin >> x >> y >> z;
    cout << "Наибольшее FLOAT числo из введёных =  " << maxEl(x, y, z) << endl;

    double f, g, h;
    cout << "Введите три числа (DOUBLE): ";
    cin >> f >> g >> h;
    cout << "Наибольшее DOUBLE числo из введёных =  " << maxEl(f, g, h) << "\n\n";

    // Задача 3.
    const int L = 10;
    double z31[L] = { 12.365, 89.2563, 14.25, 96.214, 2.3654, 25.4785, 42.1236, 65.32145, 71.112, 200.258 };
    int z32[L] = { 85, 45, 12, 150, 65, 98, 52, 78, 10, 77 };
    float z33[L] = { 45.2, 85.3, 89.1, 0.25, -98.3, 145.25, 36.14, 54.1, 11.54, 73.99 };
    cout << "\tЗадача 3.\nИзначальные массивы:\nМассив DOUBLE: ";
    showArr(z31, L);
    cout << "Массив INT: ";
    showArr(z32, L);
    cout << "Массив FLOAT: ";
    showArr(z33, L);
    cout << "Максимальное число массива DOUBLE: " << elMax(z31, L) << endl;
    cout << "Максимальное число массива INT: " << elMax(z32, L) << endl;
    cout << "Максимальное число массива FLOAT: " << elMax(z33, L) << endl;

    return 0;
}
// Задача 1.
inline double sum(double num1, double num2) {
    return (num1 + num2) / 2;
}

// Задача 2.
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

// Задача 3.
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