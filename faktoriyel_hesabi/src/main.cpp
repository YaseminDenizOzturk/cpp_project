#include <iostream>
using namespace std;

int main()
{
    // faktoriyeli alinacak sayi x 
    int x;
    int faktoriyelSonucu = 1;


    cout<<"Lutfen faktoriyelini almak istediginiz sayiyi giriniz: ";
    cin>>x;

    while(x > 0){
        faktoriyelSonucu *= x;
        x--;
    }

    cout<<"Faktoriyel sonucu: "<<faktoriyelSonucu;
    return 0;
    
}
