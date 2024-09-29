// Лабораторную работу выполнил студент 1 курса
// Направление: Математическое обеспечение и администрирование информационных систем
// Флягин Алексей Иванович
// Вариант 8

#include <iostream>

using namespace std;

const string NEGATIVE_NUM_TEXT = "Negative number";
const string POSITIVE_NUM_TEXT = "Positive number";
const string ERROR__INCORRECT_VAR_FORMAT = "Error: incorrect variable format.";

int main()
{
    system("cls");

    // ex. 1
    int a, b, c;
    cout << "Enter a, b, c:" << endl;
    cin >> a >> b >> c;
    if (a % c == 0 && b % c == 0)
    {
        cout << (a + b) / c << endl;
    }
    else if (a % c == 0 && b % c != 0)
    {
        cout << a / c + b << endl;
    }
    else
    {
        cout << a - b - c << endl;
    }
    cout << endl;



    // ex. 2
    int n;
    cout << "Enter n: ";
    cin >> n;
    switch (n)
    {
    case 0:
        cout << "zero" << endl;
        break;
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    case 4:
        cout << "four" << endl;
        break;
    case 5:
        cout << "five" << endl;
        break;
    case 6:
        cout << "six" << endl;
        break;
    case 7:
        cout << "seven" << endl;
        break;
    case 8:
        cout << "eight" << endl;
        break;
    case 9:
        cout << "nine" << endl;
        break;
    default:
        cout << ERROR__INCORRECT_VAR_FORMAT << endl;
        break;
    }
    cout << endl;



    // ex. 3
    int x;
    cout << "Enter x (only -1 or 1): ";
    cin >> x;
    if (x == -1)
        cout << NEGATIVE_NUM_TEXT;
    else if (x == 1)
        cout << POSITIVE_NUM_TEXT;
    // В данном случае можно было использовать и switch, но я не стал, так как switch выглядит более грамоздким по кол-ву строчек кода.
    // Также можно было бы записать и два if подряд вместо использования вложенных условий в блок else, однако это нецелесообразно:
    // Нам не нужно проверять второе условие, если уже подошло первое (лишнее действие).
    cout << endl;

    return 0;
}
