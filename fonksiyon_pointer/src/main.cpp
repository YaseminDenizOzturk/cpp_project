#include <iostream>
using namespace std;

void diziyiYazdir(int *diziAdres, int boyut)
{
    for (int i = 0; i < boyut; i++)
    {
        cout << diziAdres[i] << endl;
    }
}

void sayiyiArttirma(int *diziAdres, int boyut, int miktar)
{
    for (int i = 0; i < boyut; i++)
    {
        diziAdres[i] += miktar;
    }
}
void sayiyiAzaltma(int *diziAdres, int boyut, int miktar)
{
    for (int i = 0; i < boyut; i++)
    {
        diziAdres[i] -= miktar;
    }
}
int dizidekiElemanlarToplami(int *diziAdres, int boyut)
{
    int toplam = 0;

    for (int i = 0; i < boyut; i++)
    {
        toplam += diziAdres[i];
    }
    return toplam;
}

int maxEleman(int *diziAdres, int boyut)
{
    int maximum = diziAdres[0];
    // öncelikle ilk elemana maximum diyoruz sonrasında dizi boyunca karşılaştırma yaparak dizi içerisindeki maximum değerdeki elemanı buluyoruz.

    for (int i = 1; i < boyut; i++)
    {
        if (maximum < diziAdres[i])
        {
            maximum = diziAdres[i];
        }
    }
    return maximum;
}
int minEleman(int *diziAdres, int boyut)
{
    int minimum = diziAdres[0];
    // öncelikle ilk elemana minimum diyoruz sonrasında dizi boyunca karşılaştırma yaparak dizi içerisindeki minimum değerdeki elemanı buluyoruz.

    for (int i = 1; i < boyut; i++)
    {
        if (minimum > diziAdres[i])
        {
            minimum = diziAdres[i];
        }
    }
    return minimum;
}


int main()
{
    int sehirPlakalari[] = {61, 34, 35, 55};
    // diziyiYazdir(&sehirPlakalari[0], 4);
    // sayiyiArttirma(sehirPlakalari, 4, 5);
    // diziyiYazdir(sehirPlakalari, 4);
    // sayiyiAzaltma(sehirPlakalari, 4, 10);
    // diziyiYazdir(sehirPlakalari, 4);
    // dizidekiElemanlarToplami(sehirPlakalari, 4);
    // cout << dizidekiElemanlarToplami(sehirPlakalari, 4) << endl;
    cout << "Dizideki en buyuk sayi: " << maxEleman(sehirPlakalari, 4) << endl;
    cout << "Dizideki en kucuk sayi: " << minEleman(sehirPlakalari, 4) << endl;
    
    return 0;
}
