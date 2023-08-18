#include <iostream>
using namespace std;

int main()
{
    int j = 0;

    while(j < 100){
        if(j == 51){
            j++;
            break;
            // continue de o şeyi atlayıp onun için olan aşağıdaki kod satırlarını atlayıp döngüye devam eder,break te ise belirlenen şartta durumda döngüyü kırar.

        }
        cout<<j<<endl;
        j++;
    }
    return 0;

}
