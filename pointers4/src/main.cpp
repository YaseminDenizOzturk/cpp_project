#include <iostream>
using namespace std;

int main()
{
    string sehir = "Trabzon";
    string *sehirAdres = &sehir;

    cout << sehirAdres << endl;
    cout << *sehirAdres;

    return 0;
}
