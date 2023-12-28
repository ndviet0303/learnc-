#include<iostream>

using namespace std;
int fibonaci(int);
int main(){
    int n = 10;
    for(int i = 0;i < n;i++)
    {
        cout << fibonaci(i) << " ";
    }
    return 0;
}

int fibonaci(int n)
{
    if(n < 0)
    {
        return -1;
    } else if(n == 0 || n == 1)
    {
        return 1;
    }
    else{
        return fibonaci(n - 1) + fibonaci(n - 2);
    }
}
