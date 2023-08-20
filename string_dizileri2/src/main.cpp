#include <iostream>
using namespace std;

int main()
{
    string isimler[3];
    int yas[3];

    // string isimler[3];
    // isimler[0] = "Elif";
    // isimler[1] = "Eda";
    // isimler[2] = "Ece";
    // dizi elemanlarını bu şekilde de gosterebiliriz.

    for(int i = 0; i < 3; i++){
        cout<<i+1<<". elemaninin ismini ve yasiniz giriniz: ";
        cin>>isimler[i]>>yas[i];
    }

    for(int i = 0; i < 3; i++){
        cout<<i+1<<".elemanin ismi "<<isimler[i]<<" ve yasi: "<<yas[i]<<endl;

    }
    
    return 0;
}
