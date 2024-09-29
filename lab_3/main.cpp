// Лабораторную работу выполнил студент 1 курса
// Направление: Математическое обеспечение и администрирование информационных систем
// Флягин Алексей Иванович
// Вариант 8

#include <iostream>
#include <bitset>

using namespace std;

int main() {
    system("cls");
    unsigned x, i;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter i: ";
    cin >> i;
    int mask = (-1 << i) | ((1 << (i - 1)) - 1);
    x = x & mask;
    return 0;
}
