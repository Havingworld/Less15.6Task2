/*
Вам даётся массив целых чисел и одно число -- результат. Необходимо найти в массиве 2 числа, сумма которых будет давать результат,
и вывести их на экран. Гарантируется, что только одна пара чисел в массиве даёт в сумме результат.

Пример:

a = {2, 7, 11, 15}. Результат = 9

2 + 7 = 9, так что надо вывести числа 2 и 7
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a{ 2, 7, 11, 15 };
    int nSolution = 9, nI, nJ;

    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = 1; j < a.size(); j++) {
            if (a[i] + a[j] == 9) {
                nI = i;
                nJ = j;
                break;
            }
        }
    }
    cout << a[nI] << " " << a[nJ];
}

