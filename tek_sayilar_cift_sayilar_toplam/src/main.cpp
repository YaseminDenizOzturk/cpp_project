#include <iostream>
using namespace std;

int main()
{
    int sayi;
    int tekSayilarToplami = 0;
    int ciftSayilarToplami = 0;

    cout<<"Lutfen bir sayi giriniz: ";
    cin>>sayi;

    do{
        if(sayi % 2 == 0){
            ciftSayilarToplami += sayi;
        }
        else if(sayi % 2 != 0){
            tekSayilarToplami += sayi;
        }
        sayi--;
    }while(sayi >= 0);

cout<<"Cift sayilar toplami: "<<ciftSayilarToplami<<endl;

cout<<"Tek sayilar toplami: "<<tekSayilarToplami<<endl;

return 0;

}
