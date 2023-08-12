#include <iostream>
using namespace std;

int main()
{
    float birinciAci,ikinciAci,ucuncuAci;
    cout<<"Lutfen ucgennin ic acilarini giriniz"<<endl;
    cin>>birinciAci;
    cin>>ikinciAci;
    cin>>ucuncuAci;

    float icAcilariToplami;
    icAcilariToplami = birinciAci + ikinciAci + ucuncuAci;

    if(icAcilariToplami == 180) {
        if(birinciAci == 60 && ikinciAci == 60){
            cout<<"Bu ucgen eskenar ucgendir.";
        }
        else if(birinciAci == ikinciAci || birinciAci == ucuncuAci || ikinciAci == ucuncuAci){
            cout<<"Bu ucgen ikizkenar ucgendir.";
        }
        else{
            cout<<"Bu ucgen cesitkenar ucgendir.";
        }
 
    }
    else{
        cout<< "Gecersiz ucgen acilari girdiniz! Ucgenin ic acilari toplami her zaman 180 derece olmalidir.";
    }
    return 0;

}


