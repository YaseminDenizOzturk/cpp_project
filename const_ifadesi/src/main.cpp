#include <iostream>

using namespace std;

void sayilariYazdir(const int *i, const int *j)
{
    for (; i != j; i++)
    {
        cout << *i << endl;
    }
}

int main()
{
    int sayilar[] = {12, 24, 36, 48, 60, 72};
    sayilariYazdir(sayilar + 1, sayilar + 4);

    return 0;
}
