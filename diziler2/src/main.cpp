#include <iostream>
using namespace std;

int main()
{
    float sayilar[4];

    for(int i = 0; i < 4 ;i++){
        cout<<i+1<<". elemani giriniz"<<endl;
        cin>>sayilar[i];

    }
    for(int i = 0; i < 4; i ++){
        cout<<"Dizinin "<<i+1<<". elemani = "<<sayilar[i]<<endl;
    }
    return 0;

}

