#include <iostream>
using namespace std;

int main()
{
    int sayilar[10] = {12,44,65,78,99,13,9,5,75,20};
    for(int y = 0; y < 10; y++){
        cout<<"Dizinin "<<y+1<<". elemani = "<<sayilar[y]<<endl;
    }
    return 0;
}
