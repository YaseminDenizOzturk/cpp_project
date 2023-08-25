#include <iostream>
using namespace std;

void mevsimAdi()
{
    cout << "Ilkbahar" << endl;
}
void mevsimAdi(string mevsimİsmi)
{
    cout << mevsimİsmi << endl;
}
void mevsimAdi(string mevsimIsmi1, string mevsimIsmi2)
{
    cout << "Ilk yazilan mevsim adi: " << mevsimIsmi1 << endl;
    cout << "Ikinci yazilan mevsim adi: " << mevsimIsmi2 << endl;
}

int main()
{
    mevsimAdi();
    mevsimAdi("Kis");
    mevsimAdi("Sonbahar", "Yaz");

    return 0;
}
