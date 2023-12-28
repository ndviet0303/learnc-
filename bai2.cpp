#include<iostream>

using namespace std;
int giaiThua(int);
int catalan(int)
int main(){

    return 0;
}

int giaiThua(int n)
{
    if(n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int catalan(int n)
{
    return giaiThua(2 * n) / giaiThua(n + 1) * giaiThua(n);
}
