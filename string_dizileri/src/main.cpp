#include <iostream>
using namespace std;

int main()
{
    string isim;
    string soyIsim;
    string dogduguSehir;
    int numara;

    cout << "Lutfen isim , soyisim, dogdugu sehir ve okul numarasi bilgilerini sirasiyla giriniz: "<<endl;
    cin >> isim;
    cin >> soyIsim;
    cin >> dogduguSehir;
    cin >> numara;

    cout << "---Ogrenci Bilgileri--- "<<endl;
    cout << "Ogrencinin Adi: "<<isim<<endl;
    cout << "Ogrencinin Soyadi: "<<soyIsim<<endl;
    cout << "Ogrencinin Dogdugu Sehir: "<<dogduguSehir<<endl;
    cout << "Ogrencinin Okul Numarası: "<<numara<<endl;

    return 0;

}
