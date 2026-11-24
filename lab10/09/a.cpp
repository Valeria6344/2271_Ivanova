#include <iostream>
int main(){
    {
    int a[10];
    std::cout << &a[8] - &a[3] << std::endl;
    }
    {
    char a[10];
    std::cout << &a[8] - &a[3] << std::endl;
    }
    {
    double a[10];
    std::cout << &a[8] - &a[3] << std::endl;
    }
    return 0;
}
