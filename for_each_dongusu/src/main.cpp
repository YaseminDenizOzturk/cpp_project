#include <iostream>
using namespace std;

int main()
{
    string text = "cpp ogreniyorum";
    int sayac = 0;
    for (char textCh : text)
    {
        sayac++;
        if (textCh != 'p')
        {
            cout << textCh;
        }
    }
    cout << endl << sayac;

    return 0;
}
