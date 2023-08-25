#include <iostream>
using namespace std;

int toplam(int sayi1, int sayi2)
{
    return sayi1 + sayi2;
}

int main()
{
    int x = 15;
    int y = 23;
    while (true)
    {
        cout << "Lutfen toplanacak iki sayiyi giriniz: ";
        cin >> x >> y;
        cout << x << "+" << y << "=" << toplam(x, y) << endl;
    }

    return 0;
}
