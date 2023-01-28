//Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число). Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.
//
//Формат входных данных
//Вводятся три числа.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//1
//2
//3
//
//Sample Output:
//3

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A < B)
        A = B;
    if (A < C)
        A = C;

    cout << A;
}