//Парты
//В некоторой школе решили набрать три новых математических класса и оборудовать кабинеты для них новыми партами. За каждой партой может сидеть два учащихся. Известно количество учащихся в каждом из трех классов. Выведите наименьшее число парт, которое нужно приобрести для них. Каждый класс сидит в своем кабинете.
//
//Формат входных данных
//Программа получает на вход три целых неотрицательных числа: количество учащихся в каждом из трех классов (числа не превышают 1000).
//
//Формат выходных данных
//Выведите одно целое число - ответ на задачу.
//
//Sample Input 1:
//20
//21
//22
//
//Sample Output 1:
//32
//
//Sample Input 2:
//16
//18
//20
//
//Sample Output 2:
//27

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    cout << A / 2 + A % 2
          + B / 2 + B % 2
          + C / 2 + C % 2;
}