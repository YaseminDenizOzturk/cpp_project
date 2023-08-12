#include <iostream>
using namespace std;

int main()
{
    int sayi,yuzbinler,onbinler,binler,yuzler,onlar,birler,sayiDegerleriToplami;

    cout << "Lutfen 6 basamakli bir sayi giriniz: ";
    cin>>sayi;

    yuzbinler = sayi / 100000;
    onbinler = (sayi % 100000) / 10000;
    binler = (sayi % 10000) / 1000;
    yuzler = (sayi % 1000) / 100;
    onlar = (sayi % 100) / 10;
    birler = sayi % 10;

    cout <<"Yuzbinler basamagi: "<<yuzbinler<<endl;
    cout <<"Onbinler basamagi: "<<onbinler<<endl;
    cout <<"Binler basamagi: "<<binler<<endl;
    cout <<"Yuzler basamagi: "<<yuzler<<endl;
    cout <<"Onlar basamagi: "<<onlar<<endl;
    cout <<"Birler basamagi: "<<birler<<endl;


    sayiDegerleriToplami = yuzbinler + onbinler + binler + yuzler + onlar + birler;
    cout << "Girdiginiz sayinin sayi degerleri toplamı: "<<sayiDegerleriToplami;
    
    return 0;

}
