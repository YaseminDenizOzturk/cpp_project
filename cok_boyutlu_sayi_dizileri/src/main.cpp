#include <iostream>
using namespace std;

int main()
{
    int matris[4][4] = {{20,40,60,80},{10,20,30,40},{95,89,67,34},{43,53,63,73}};
    //matrisleri yazarken içlerinden birini boş bırakırsak örn : (23,56,78) boş olan yere 0 atar.


    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 4;j++){
            cout<<matris[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
