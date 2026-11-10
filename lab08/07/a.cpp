#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool found = false;
    for (int x : a) {
        if (x < 0) {
            cout << "Найдено отрицательное число: " << x << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Отрицательных чисел нет" << endl;
    }
    return 0;
}