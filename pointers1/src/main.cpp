#include <iostream>
using namespace std;

int main()
{
    int sayi = 20;
    int *sayininKonumu;
    sayininKonumu = &sayi;

    cout << sayininKonumu << endl;
    cout << sayininKonumu + 1 << endl;
    cout << *sayininKonumu << endl;

    return 0;
    
}
