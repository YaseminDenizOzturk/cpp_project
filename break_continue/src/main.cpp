#include <iostream>
using namespace std;

int main()
{
   int i = 0;

   do{
    if(i % 5 == 0){
        i++;
        continue;
    }
    cout<<i<<endl;
    i++;
   }while(i < 20);
   
   return 0;
}
