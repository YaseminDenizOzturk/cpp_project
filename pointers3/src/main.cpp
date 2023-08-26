#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char sehir[13] = "Trabzon";
    char *sehirAdres = sehir;
    char *sehirAdres2 = &sehir[0];

    cout << *sehirAdres << " " << *sehirAdres2 << endl;

    for (int i = 0; i < strlen(sehir); i++)
    {
        cout << *(sehirAdres + i);
    }

    return 0;
}
