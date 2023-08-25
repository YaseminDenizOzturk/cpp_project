#include <iostream>
using namespace std;

void sayilariDegistir(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
// temp geçici değişken, burada sayıları değiştirirken bize yardımcı oluyor.

int main()
{
    int sayi1, sayi2, temp;
    cout << "iki sayi giriniz: " << endl;
    cin >> sayi1 >> sayi2;

    // cout<<"Sayi1: "<<sayi1<<"Sayi2: "<<sayi2<<endl;
    sayilariDegistir(&sayi1, &sayi2);
    cout << "Sayi1: " << sayi1 << " " << "Sayi2: " << sayi2 << endl;
    return 0;
}
