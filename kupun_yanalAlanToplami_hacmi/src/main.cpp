#include <iostream>
using namespace std;

int main()
{
    float kupunBirKenari;
    float kupunHacmi;
    float kupunYanalAlanlarininToplami;

    cout << "Lutfen kupun bir kenarini giriniz: ";
    cin >> kupunBirKenari;

    kupunHacmi = kupunBirKenari *kupunBirKenari *kupunBirKenari;
    kupunYanalAlanlarininToplami = 6 * kupunBirKenari * kupunBirKenari;

    // cout <<"Kupun yanal alanlarinin toplami: "<<6 * kupunBirKenari * kupunBirKenari<<endl;
    // cout <<"Kupun hacmi: "<< kupunBirKenari * kupunBirKenari * kupunBirKenari;

    cout<< "Kupun yanal alanlarinin toplami: " << kupunYanalAlanlarininToplami << endl;
    cout << "Kupun hacmi: " << kupunHacmi;

    return 0;
}
