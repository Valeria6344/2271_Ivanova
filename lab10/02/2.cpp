#include <iostream>
int main() {
    double x[10];
    for (int i = 0; i <10; i++)
        std::cout << &x[i] << ' ' << reinterpret_cast<size_t>(&x[i]) << std::endl;
    return 0;
}