#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int& elem : v) {
        std::cin >> elem;
    }
    int last = v.back();
    for (int& elem : v) {
        elem += last;
    }
    int posit = 0;
    int negat = 0;
    for (int elem : v) {
        if (elem > 0) {
            posit++;
        } else if (elem < 0) {
            negat++;
        }
    }
    std::cout << "Положительные элементы: " << posit << std::endl;
    std::cout << "Отрицательные элементы: " << negat << std::endl;
    return 0;
}
