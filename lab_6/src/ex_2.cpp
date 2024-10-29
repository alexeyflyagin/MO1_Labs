// Лабораторную работу выполнил студент 1 курса
// Направление: Математическое обеспечение и администрирование информационных систем
// Флягин Алексей Иванович
// Вариант 8

#include "ex_2.hpp"
#include "utils.hpp"
#include "strings.hpp"
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void ex2()
{
    int n;
    cout << ENTER_N;
    cin >> n;
    int c = 0;
    vector<int> arr;
    cout << ENTER_SEQUENCE;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        arr.push_back(j);
    }
    sort(arr.begin(), arr.end(), [](int a, int b)
    {
        vector<int> aDigits = getDigitsFromNum(a);
        vector<int> bDigits = getDigitsFromNum(b);
        int aSum = getSum(aDigits);
        int bSum = getSum(bDigits);
        if (aSum == bSum) 
        {
            int aMin = *min_element(aDigits.begin(), aDigits.end());
            int bMin = *min_element(bDigits.begin(), bDigits.end());
            if (aMin == bMin) return a < b;
            return aMin < bMin;
        }
        return aSum < bSum;
    });
    cout << fromVectorToString(arr);
}
