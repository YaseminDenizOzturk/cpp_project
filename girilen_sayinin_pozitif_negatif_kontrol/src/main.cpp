#include <iostream>
using namespace std;

int main()
{
    float sayi;
    cout<<"Lutfen pozitiflik-negatiflik durumunu kontrol etmek istediğiniz sayiyi giriniz"<<endl;
    cin>>sayi;

    if(sayi > 0){
        cout<<"Sayiniz: "<<sayi<<" Girdiginiz sayi pozitiftir.";
    }
    else if(sayi == 0){
        cout<<"Girdiginiz sayi 0 dir. 0 sayisinin pozitiflik negatiflik durumu yoktur.";
    }
    else{
        cout<<"Sayiniz: "<<sayi<< " Girdiginiz sayi negatiftir.";
    }

    return 0;

}

