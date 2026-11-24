#include <iostream>
int main(){
    {
    int a = 10, b = 20;
    int *p = &a , *q = &b;
    p = q;
    std::cout << *p <<' '<< *q << std::endl;
    }
    {
    int a = 10, b = 20;
    int *p = &a , *q = &b;
    *p = *q;
    std::cout << *p <<' '<< *q << std::endl;
    }
    return 0;
}