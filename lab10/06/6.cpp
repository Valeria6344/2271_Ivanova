#include <iostream>
int main(){
    {
    double x = 0;
    double *d = &x;
    std::cout << "d = " << reinterpret_cast<size_t>(d) << std::endl;
    std::cout << "d + 4 = " << reinterpret_cast<size_t>(d + 4) << std::endl;
    std::cout << "d - 4 = " << reinterpret_cast<size_t>(d - 4) << std::endl;
    std::cout << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4) << std::endl;
    }
    {
    int x = 0;
    int *d = &x;
    std::cout << "d = " << reinterpret_cast<size_t>(d) << std::endl;
    std::cout << "d + 4 = " << reinterpret_cast<size_t>(d + 4) << std::endl;
    std::cout << "d - 4 = " << reinterpret_cast<size_t>(d - 4) << std::endl;
    std::cout << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4) << std::endl;
    }
    return 0;
}