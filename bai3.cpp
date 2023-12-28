#include<iostream>

int main(){
    int *p,*q,*r;

    int value;
    std::cin >> value;
    p = &value;
    std::cout << *p;

     int value2;
    std::cin >> value2;
    q = &value2;
    std::cout << *q;

    int maxNumber = *q;
    if(maxNumber < *p)
    {
        maxNumber = *p;
    }

    std::cout << maxNumber;


return 0;
}
