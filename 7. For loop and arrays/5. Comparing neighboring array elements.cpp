//Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа. Если соседних элементов одного знака нет - не выводите ничего. Если таких пар соседей несколько - выведите первую пару.
//
//Формат входных данных
//В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива. Все числа отличны от нуля.
//
//Формат выходных данных
//Выведите ответ на задачу. Элементы выводятся в порядке неубывания.
//
//Sample Input:
//5
//-1 2 3 -1 -2
//
//Sample Output:
//2 3

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N];
    cin >> a[0];
    for (int i = 1; i < N; ++i) {

        cin >> a[i];
        if (a[i] / a[i - 1] > 0) {
            if (a[i] < a[i - 1]) {
                cout << a[i] << ' ' << a[i - 1];
                return 0;
            } else {
                cout << a[i - 1] << ' ' << a[i];
                return 0;
            }
        }
    }
}