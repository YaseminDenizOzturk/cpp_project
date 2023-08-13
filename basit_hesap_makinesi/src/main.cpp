#include <iostream>
using namespace std;

int main()
{
    float sayi1,sayi2;
    float toplama,cikarma,carpma,bolme,mod;
    
    int islem;

    cout<<"Lutfen islem yapilacak iki sayiyi sirasiyla giriniz: ";
    cin>>sayi1;
    cin>>sayi2;

    cout<<"Lutfen yapmak istediginiz islemi seciniz"<<endl;
    cout<<"1)TOPLAMA"<<endl;
    cout<<"2)CİKARMA"<<endl;
    cout<<"3)CARPMA"<<endl;
    cout<<"4)BOLME"<<endl;
    cout<<"5)MOD ALMA İSLEMİ"<<endl;

    cin>>islem;

    if (islem == 1){
        toplama = sayi1 + sayi2;
        cout<<"Sonuc: "<<toplama;

    }
    else if(islem == 2){
        cikarma = sayi1 - sayi2;
        cout<<"Sonuc: "<<cikarma;
    }
    else if(islem == 3){
        carpma = sayi1 * sayi2;
        cout<<"Sonuc: "<<cikarma;  
    }
    else if(islem == 4){
        bolme = sayi1 / sayi2;
        cout<<"Sonuc: "<<bolme; 
    }
    else if(islem == 5){
        mod = int(sayi1) % int(sayi2);
        cout<<"Sonuc: "<<mod; 
    }
    else{
        cout<<"Gecersiz İslem Numarasi";
    }

}
