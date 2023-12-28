#include<iostream>
#include<vector>
using namespace std;
int main(){
    struct weather{
        int luongMua;
        int nhietDoCaoNhat;
        int nhietDoThapNhat;
        int nhietDoTrungBinh;
    };
    vector<weather> quy2;

    for(int i = 4;i <= 6;i++)
    {
        weather data;
        cout << "luong mua thang" << i << " don vi(mm): ";
        cin >> data.luongMua;
        cout << "nhiet do cao nhat" << i << " don vi(do c): ";
        cin >> data.nhietDoCaoNhat;
        cout << "luong do thap nhat" << i << " don vi(do c): ";
        cin >> data.nhietDoThapNhat;
        data.nhietDoTrungBinh = (data.nhietDoCaoNhat + data.nhietDoThapNhat) / 2;
        quy2.push_back(data);
    }
    struct weatherAvg{
        int luongMuaTB;
        int tongLuongMua;
        int nhietDoThapNhat;
        int nhietCaoNhat;
        int thangXayra;
    };
    for(int i = 0;i < quy2.size();i++)
    {
        luongMuaTB += quy2.at(i).luongMua
    }
return 0;
}
