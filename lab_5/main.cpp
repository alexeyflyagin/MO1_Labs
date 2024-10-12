// Лабораторную работу выполнил студент 1 курса
// Направление: Математическое обеспечение и администрирование информационных систем
// Флягин Алексей Иванович
// Вариант 8

#include <iostream>

using namespace std;

void ex1() {
    int n;
    int p = 1;
    int max = INT_MIN;
    int maxIndex = 0;
    cout << "Enter the length of the sequence: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        int x;
        cout << i << ": ";
        cin >> x;
        if (x % 5 != 0) {
            p *= x;
            if (x > max) {
                max = x;
                maxIndex = i;
            }
        }
    }
    cout << "Product: " << p << "\t" << "max: " << max << " (" << maxIndex << ")" << endl;
}

void ex2() {
    int n;
    int p = 1;
    cout << "Enter the number: ";
    cin >> n;
    while (n != 0) {
        int ns = n % 10;
        if (ns % 2 != 0) p *= ns;
        n /= 10;
    }
    cout << "Product: " << p << endl;
}

int main()
{
    system("cls");
    ex1();
    cout << endl;
    ex2();
    return 0;
}
