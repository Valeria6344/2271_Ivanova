#include <iostream>
int main(){
    int y = 1, x = 2;
    int *p = &y, *q = &x;
    if (p < q)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
    return 0;
}