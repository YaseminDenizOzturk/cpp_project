#include <iostream>
using namespace std;

int main()
{
    float sayi;
    float sayi2;
    

    cin>>sayi;
    
    sayi = sayi + 5;
    sayi += 5;

    cout<< sayi<<endl;

    cin>>sayi2;
    sayi2 += 1;
    cout<< sayi2<<endl;
    sayi2 = sayi2 + 1;
    cout<< sayi2<<endl;
    sayi2++;

    cout<< sayi2;

    return 0;
}
