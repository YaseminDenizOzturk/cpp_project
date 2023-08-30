#include <iostream>
using namespace std;

void diziYazdir(const string *dizininAdresi)
{
    const string *geciciDizi = dizininAdresi;

    for (; dizininAdresi != (geciciDizi + 4); dizininAdresi++)
    {
        cout << *dizininAdresi << " ";
    }
}

int main()
{
    string dizi[] = {"Software", "Developer", "Yasemin", "Deniz"};
    diziYazdir(dizi);

    return 0;
}
