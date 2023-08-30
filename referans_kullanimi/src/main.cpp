#include <iostream>
using namespace std;

void ikiSayiyiDegistir(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Guncel birinci sayi: " << x << " " << "Guncel ikinci sayi: " << y << endl;
}

int main()
{
    int birinciSayi = 90;
    int ikinciSayi = 79;

    cout << "Eski birinci sayi: " << birinciSayi << " " << "Eski ikinci sayi: " << ikinciSayi << endl;
    ikiSayiyiDegistir(birinciSayi, ikinciSayi);
    // cout<<birinciSayi<<" "<<ikinciSayi<<endl;

    return 0;
}
