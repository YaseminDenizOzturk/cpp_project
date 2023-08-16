#include <iostream>
using namespace std;

int main()
{
    int sayi = 5;

    do{
        cout<<sayi<<endl;
        sayi--;
    }while(sayi > 0);
    // once do nun icine girip bir kez calistirir daha sonra while icindeki sarti kontrol eder saglarsa yine do icindeki islem gerceklestirilir.
    return 0;

}
