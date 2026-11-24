#include <iostream>
using namespace std;
int main() {
    int a = 8 , b = 4;
    int c = a * b;
    int d = a & b;         
    int e = 10;         
    int* p = &e;   
    std::cout << &e << std::endl;
    std::cout << *p << std::endl;
    int& r = e;
    r = 20;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    return 0;
}
