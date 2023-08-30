#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int i;
    srand(time(NULL));

    i = rand() % 100;
    // % 100 dediğim için 99 a kadar olan sayilardan rastgele sayi uretir. ama % 10 deseydim 9 a kadar olurdu.

    cout << i;

    return 0;
}
