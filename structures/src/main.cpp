#include <iostream>
using namespace std;

struct musteriBilgileri
{
    int telefon;
    int toplamAldigiUurunAdedi;
    string isim;
    string soyisim;
    string urunAdi;
    char cinsiyet;
};

int main()
{
    musteriBilgileri musteri1 = {55512555, 2, "Yasemin", "Ozturk", "Kulaklik", 'K'};
    musteriBilgileri musteri2;
    cout << "Lutfen musteri bilgilerini sirasiyla giriniz: ";
    cin >> musteri2.telefon >> musteri2.toplamAldigiUurunAdedi >> musteri2.isim >> musteri2.soyisim >> musteri2.urunAdi >> musteri2.cinsiyet;

    cout << musteri1.telefon << endl;
    cout << musteri1.toplamAldigiUurunAdedi << endl;
    cout << musteri1.isim << endl;
    cout << musteri1.soyisim << endl;
    cout << musteri1.urunAdi << endl;
    cout << musteri1.cinsiyet << endl;

    cout << musteri2.telefon << endl;
    cout << musteri2.toplamAldigiUurunAdedi << endl;
    cout << musteri2.isim << endl;
    cout << musteri2.soyisim << endl;
    cout << musteri2.urunAdi << endl;
    cout << musteri2.cinsiyet << endl;

    return 0;
}
