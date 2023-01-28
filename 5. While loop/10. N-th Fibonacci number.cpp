//Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
//
//По данному числу N определите N-е число Фибоначчи F(N).
//
//Формат входных данных
//Вводится натуральное число N.
//
//Формат выходных данных
//Выведите ответ на задачу.
//
//Sample Input:
//6
//
//Sample Output:
//8

#include <iostream>

using namespace std;

int main()
{
    int N, F1 = 0, F2 = 1;
    cin >> N;

    while (N--) {
        int t = F2;
        F2 += F1;
        F1 = t;
    }

    cout << F1;
}