#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    x = 20;
    y = 23;
    z = (x > y) ? x : y;
    // makro kullanimi
    // x y den büyükse z = x , değilse z = y yapacak.

    cout << z;

    return 0;
}
