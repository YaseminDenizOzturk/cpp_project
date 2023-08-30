#include <iostream>
using namespace std;

string harfNotu(float ogrenciNotu)
{
    if (ogrenciNotu > 90)
    {
        return "AA";
    }
    else if (ogrenciNotu > 75)
    {
        return "BB";
    }
    else if (ogrenciNotu > 50)
    {
        return "CC";
    }
    else
    {
        return "FF";
    }
}

int main()
{
    float vizeNotu, finalNotu;
    float ogrenciNotOrt;

    cout << "Sirasiyla vize ve final notunuzu giriniz: " << endl;
    cin >> vizeNotu;
    cin >> finalNotu;

    ogrenciNotOrt = vizeNotu * 0.4 + finalNotu * 0.6;
    cout << "Ogrenci ortalama: " << ogrenciNotOrt << endl;
    cout << harfNotu(ogrenciNotOrt);

    return 0;
}
