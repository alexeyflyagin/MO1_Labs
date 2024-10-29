// Лабораторную работу выполнил студент 1 курса
// Направление: Математическое обеспечение и администрирование информационных систем
// Флягин Алексей Иванович
// Вариант 8

#include "ex_1.hpp"
#include "utils.hpp"
#include "strings.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void ex1()
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
        string jString = to_string(j);
        set<char> jSet(jString.begin(), jString.end());
        if (jSet.size() == 1 && jString.size() > 1) c++;
        arr.push_back(j);
    }
    if (c >= 3) sort(arr.begin(), arr.end(), [](int a, int b) { return a > b; });
    cout << fromVectorToString(arr);
}
