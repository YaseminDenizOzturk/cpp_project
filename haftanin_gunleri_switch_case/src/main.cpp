#include <iostream>
using namespace std;

int main()
{
    int kacinciGun;
    cout<<"Haftanin Kacinci Gununun ismini Ogrenmek istersiniz? 1-7 arasinda bir sayi giriniz: "<<endl;
    cin>>kacinciGun;

    switch(kacinciGun){
        case 1:
            cout<<"Pazartesi";
            break;
        case 2:
            cout<<"Sali";
            break;
        case 3:
            cout<<"Carsamba";
            break;
        case 4:
            cout<<"Persembe";
            break;
        case 5:
            cout<<"Cuma";
            break;
        case 6:
            cout<<"Cumartesi";
            break;
        case 7:
            cout<<"Pazar";
            break;
        default:
            cout<<"Gecersiz!";
            break;
        
    }

    return 0;
    
}


