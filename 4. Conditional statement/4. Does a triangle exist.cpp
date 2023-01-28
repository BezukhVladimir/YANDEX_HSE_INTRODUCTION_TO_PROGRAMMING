//Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами. Если треугольник существует, выведите строку YES, иначе выведите строку NO.
//Треугольник — это три точки, не лежащие на одной прямой.
//
//Формат входных данных
//Вводятся три числа.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//3
//4
//5
//
//Sample Output:
//YES

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    cout << ((A < B + C &&
              B < A + C &&
              C < A + B) ? "YES" : "NO");
}