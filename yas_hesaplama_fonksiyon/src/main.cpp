#include <iostream>
using namespace std;

int yasHesaplayici(int dogumTarihi)
{
    return 2023 - dogumTarihi;
}

int main()
{
    int dogumYili;
    cout << "Lutfen dogum yilinizi giriniz: " << endl;
    cin >> dogumYili;

    cout << "Kullanicinin Yasi: " << yasHesaplayici(dogumYili) << endl;

    return 0;
}
