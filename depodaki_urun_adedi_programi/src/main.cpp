#include <iostream>
using namespace std;

int main()
{
    int stokAdedi;
    char islem;

    cout<<"Lutfen depodaki stok miktarini giriniz: ";
    cin>>stokAdedi;

    cout<<"1)Depodan urun cikartmak icin"<<endl;
    cout<<"2)Depoya urun eklemek icin"<<endl;
    cout<<"0)Depodaki mevcut urun adedi icin"<<endl;

    cout<<"Lutfen islem seciniz: ";
    cin>>islem;

    int islemYapilacakUrunAdedi;

    switch(islem){
        case '1':
            cout<<"Kac adet urun satildi?"<<endl;
            cin>>islemYapilacakUrunAdedi;
            stokAdedi -= islemYapilacakUrunAdedi;
            cout<<"Depodaki mevcut urun adedi: "<<stokAdedi;
            break;
        case '2':
            cout<<"Kac adet urun eklendi?"<<endl;
            cin>>islemYapilacakUrunAdedi;
            stokAdedi += islemYapilacakUrunAdedi;
            cout<<"Depodaki mevcut urun adedi: "<<stokAdedi;
            break;
        case '0':
            cout<<"Mevcut Adet: "<<stokAdedi<<endl;
            break;

        default:
            cout<<"Gecerli bir islem secimi yapilmadi!"<<endl;
            cout<<"Depodaki mevcut urun adedi: "<<stokAdedi;

    }

    return 0;

}
