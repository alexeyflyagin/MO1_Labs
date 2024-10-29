#include "ex_4.hpp"
#include "strings.hpp"
#include "utils.hpp"
#include "vector"
#include <iostream>
#include <string>

using namespace std;

void ex4() {
    int n;
    cout << ENTER_N;
    cin >> n;

    vector<int> arr;
    cout << ENTER_SEQUENCE;
    for (int j = 0; j < n; j++) {
        int i;
        cin >> i;
        arr.push_back(i);
    }
    
    arr.erase(remove_if(arr.begin(), arr.end(), [](int num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum % 7 == 0;
    }), arr.end());

    int arr_size = arr.size();
    for (int j = 0; j < arr_size; j++) {
        int num = arr[j];
        int mask = 0;
        while (num != 0) {
            int digit = num % 10;
            if (mask & (1 << digit)) {
                arr.push_back(arr[j]);
                break;
            }
            mask |= (1 << digit);
            num /= 10;
        }
    }

    cout << RESULT;
    for (int j = 0; j < arr.size(); j++) {
        cout << arr[j] << " ";
    }
}
