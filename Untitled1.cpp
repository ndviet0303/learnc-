
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main() {
	int n,tong = 0;
	cout << "Nhap n:";
	cin >> n;

	int a[n];
    while(n <= 0)
    {
        cout << "dmm";
        cin >> n;
    }
    for(int i=0;i < n;i++)
    {
        cout << "Nhap phan tu a[" << i << "]:";
        cin >> a[i];
    }
    //1.2
    for(int i=0;i < n;i++)
    {
        tong += a[i];
    }
     int avgResult =  tong / n;
    //1.2 de 2

    /* int maxNumber = a[0];
    for(int i=0;i < n;i++)
    {
        if(maxNumber < a[i])
        {
            maxNumber = a[i];
        }
    }
    cout << maxNumber;
    */

    //1.3 de 1

    int giaTri = a[0];
    int temp2 = abs(a[0] - avgResult);
    for(int i=0;i < n;i++)
    {
        int temp = abs(a[i] - avgResult);
        if(temp < temp2)
        {
            temp2 = temp;
            giaTri = a[i];
        }
    }
    cout << giaTri;
}
