#include <iostream>
using namespace std;

void diziyiYazdir(int sayiDizisi[],int boyut){
    for(int i = 0;i < boyut;i++){
        cout<<sayiDizisi[i]<<" ";
    }
}


int main()
{
    int birinciDizi[3] = {30,40,50};
    int ikinciDizi[5] = {120,240,50,90};
    int ucuncuDizi[6] = {1,2,3,4,5,6};

    diziyiYazdir(birinciDizi,3);
    cout<<endl;
    diziyiYazdir(ikinciDizi,5);
    cout<<endl;
    diziyiYazdir(ucuncuDizi,6);
    

    return 0;

}
