// Лабораторную работу выполнил студент 1 курса
// Направление: Математическое обеспечение и администрирование информационных систем
// Флягин Алексей Иванович
// Вариант 8

#include "utils.hpp"
#include <algorithm>

using namespace std;

string fromVectorToString(vector<int> arr)
{
    string r;
    for (auto element : arr) { r += to_string(element) + " "; }
    return r;
}

vector<int> getDigitsFromNum(int num)
{
    vector<int> a;
    while (num != 0)
    {
        a.push_back(num % 10);
        num /= 10;
    }
    reverse(a.begin(), a.end());
    return a;
}

int getSum(vector<int> arr)
{
    int r = 0;
    for (int i : arr) { r += i; }
    return r;
}
