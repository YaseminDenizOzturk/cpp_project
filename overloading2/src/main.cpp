#include <iostream>
using namespace std;

int toplama(int sayi1, int sayi2)
{
    cout << "int toplama sonucu: ";
    return sayi1 + sayi2;
}
double toplama(double sayi1, double sayi2)
{
    cout << "double toplama sonucu: ";
    return sayi1 + sayi2;
}
string toplama(string sayi1, string sayi2)
{
    cout << "string toplama sonucu: ";
    return sayi1 + sayi2;
}

int main()
{

    cout << toplama(23, 9) << endl;
    cout << toplama(5.5, 1.2) << endl;
    cout << toplama("20", "23") << endl;

    return 0;
}
