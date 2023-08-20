#include <iostream>
using namespace std;

int main()
{
    string isim1 = "Yasemin"; // 0
    string isim2 = "Deniz"; // 1
    string isim3 = "Elif"; // 2

    int ogrenciVize1Sonuc[3];
    int ogrenciVize2Sonuc[3];
    int ogrenciFinalSonuc[3];
    float notOrt[3];

    cout<<"Ogrencilerin 1.vize notlari: ";
    for(int i = 0; i < 3 ; i++){
        cin>>ogrenciVize1Sonuc[i];
    }
    cout<<"Ogrencilerin 2.vize notlari: ";
    for(int i = 0; i < 3 ; i++){
        cin>>ogrenciVize2Sonuc[i];
    }
    cout<<"Ogrencilerin final notlari: ";
    for(int i = 0; i < 3 ; i++){
        cin>>ogrenciFinalSonuc[i];
    }
    
    for(int i = 0; i < 3; i++){
        notOrt[i] = ogrenciVize1Sonuc[i] * 0.2 + ogrenciVize2Sonuc[i] * 0.3 + ogrenciFinalSonuc[i] * 0.5;
        
    }

    for(int i = 0; i < 3; i++){
        cout<<i+1<<". ogrencinin ortalamasi: "<<notOrt[i]<<endl;
        int ogrenciOrt = notOrt[i];
        if(notOrt[i]>=85){
            cout<<"Bu ogrencinin karne notu: 5"<<endl;
        }
        else if(notOrt[i]>=70){
            cout<<"Bu ogrencinin karne notu: 4"<<endl;
        }
        else if(notOrt[i]>=55){
            cout<<"Bu ogrencinin karne notu: 3"<<endl;
        }
        else if(notOrt[i]>=45){
            cout<<"Bu ogrencinin karne notu: 2"<<endl;
        }
        else{
            cout<<"Bu ogrencinin karne notu: 1"<<endl;
        }
    }
    
    return 0;

}
