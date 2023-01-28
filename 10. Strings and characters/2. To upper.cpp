//Переведите символ в верхний регистр.
//
//Входные данные
//Вводится единственый символ.
//
//Выходные данные
//Если введеный символ является строчной буквой латинского алфавита, то выведите такую же заглавную букву. В противном случае выведите тот же символ, который был введен.
//
//Sample Input:
//b
//
//Sample Output:
//B

#include <iostream>

using namespace std;

int main()
{
    char C;
    cin >> C;

    cout << (('a' <= C && C <= 'z')
              ? (char) (C - 32) : C);
}