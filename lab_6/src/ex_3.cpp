// Лабораторную работу выполнил студент 1 курса
// Направление: Математическое обеспечение и администрирование информационных систем
// Флягин Алексей Иванович
// Вариант 8

#include "ex_3.hpp"
#include "strings.hpp"
#include <iostream>
#include <string>

using namespace std;

void ex3() {
    int n, m;
    cout << ENTER_N;
    cin >> n;
    cout << ENTER_M;
    cin >> m;

    int** arr = new int*[n]; // I use regular arrays, not vectors :)
    for (char i = 0; i < n; i++) { arr[i] = new int[m]; }

    cout << ENTER_EACH_CELL << endl;
    for (char i = 0; i < n; i++) {
        for (char j = 0; j < m; j++) { 
            cin >> arr[i][j]; 
        }
    }

    int maxProductColumnIndex = 0;
    for (char j = 0; j < m; j++) {
        int columnProduct = 1;
        for (char i = 0; i < n; i++) { 
            columnProduct *= arr[i][j]; 
        }
        if (columnProduct > maxProductColumnIndex) maxProductColumnIndex = j;
    }

    for (char i = 0; i < n; i++) {
        arr[i][maxProductColumnIndex] -= 3;
    }

    cout << endl << RESULT << endl;
    for (char i = 0; i < n; i++) {
        for (char j = 0; j < m; j++) { 
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) { 
        delete[] arr[i]; 
    }
    delete[] arr;
}
