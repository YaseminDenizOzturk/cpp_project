#include <iostream>
using namespace std;

int main()
{
    int y = 0;
    for(;y < 21;y++){
        if(y == 10){
            continue;
        }
        cout<<y<<endl;
    }
    return 0;
}
