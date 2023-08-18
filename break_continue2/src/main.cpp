#include <iostream>
using namespace std;

int main()
{
    int y = 0;

    do{
        if(y == 10){
            break;
        }
        cout<<y<<endl;
        y++;
    }while(y < 20);

    return 0;

}
