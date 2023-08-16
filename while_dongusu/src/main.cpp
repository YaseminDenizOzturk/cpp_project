#include <iostream>
using namespace std;

int main()
{
    int tepeDeger;
    int toplam = 0;

    cout<<"Tepe Deger Kac Olsun?";
    cin>>tepeDeger;

    while(tepeDeger>0){
        cout<<tepeDeger<<endl;
        toplam += tepeDeger;
        tepeDeger--;
    }

    cout<<"Girdiginiz tepe degere gore tepe degerden 1'e kadar olan sayilarin toplami: "<<toplam<<endl;
    return 0;
}
