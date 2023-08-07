#include <iostream>
using namespace std;
int main()
{
    float sayi1;
    float sayi2;
    float toplam = 0,cikarma = 0,carpma = 0,bolme = 0;
    cout<<"Lutfen iki sayi giriniz"<<endl;
    cin>>sayi1;
    cin>>sayi2;
    toplam = sayi1 + sayi2;
    cout<<"Toplam: "<<toplam<<endl;

    cikarma = sayi1 - sayi2;
    cout<<"Cikarma: "<<cikarma<<endl;

    carpma = sayi1 * sayi2;
    cout<<"Carpma: "<<carpma<<endl;

    bolme = sayi1 / sayi2;
    cout<<"Bolme: "<<bolme<<endl;


    return 0;


}
