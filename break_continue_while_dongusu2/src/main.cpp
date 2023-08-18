#include <iostream>
using namespace std;

int main()
{
   int i = 0;

   while(i < 21){

        if(i == 16){
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
   }
   return 0;

}
