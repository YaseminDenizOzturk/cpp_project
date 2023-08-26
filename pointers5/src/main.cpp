#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string programlamaDilleri[] = {"cpp", "python", "java", "javascript"};
    string *programlamaDilleriAdres = programlamaDilleri;

    cout << programlamaDilleriAdres << endl; // burada ekrana yazilacak adres cppnin adresidir.

    for (int i = 0; i < 4; i++)
        cout << *(programlamaDilleriAdres + i) << endl;
    // for dongusunun icine tek satir yazilacaksa suslu parantez acmaya gerek yok.
    return 0;
}
