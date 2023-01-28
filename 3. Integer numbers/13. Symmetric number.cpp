//Симметричное число
//Дано четырехзначное число. Определите, является ли его десятичная запись симметричной. Если число симметричное, то выведите 1, иначе выведите любое другое целое число. Число может иметь меньше четырех знаков, тогда нужно считать, что его десятичная запись дополняется слева незначащими нулями.
//
//Формат входных данных
//Вводится единственное число.
//
//Формат выходных данных
//Выведите одно целое число - ответ на задачу.
//
//Sample Input 1:
//2002
//
//Sample Output 1:
//1
//
//Sample Input 2:
//2008
//
//Sample Output 2:
//37

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    cout << 1 + N / 100
          - N % 10 * 10
          - N % 100 / 10;
}