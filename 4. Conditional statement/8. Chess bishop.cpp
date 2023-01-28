//Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите, может ли слон попасть с первой клетки на вторую одним ходом.
//
//Формат входных данных
//Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
//
//Формат выходных данных
//Программа должна вывести YES, если из первой клетки ходом слона можно попасть во вторую или NO в противном случае.
//
//Sample Input:
//4
//4
//5
//5
//
//Sample Output:
//YES

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int X0, Y0, X1, Y1;
    cin >> X0 >> Y0 >> X1 >> Y1;

    cout << ((abs(X0 - X1) == abs(Y0 - Y1))
              ? "YES" : "NO");
}