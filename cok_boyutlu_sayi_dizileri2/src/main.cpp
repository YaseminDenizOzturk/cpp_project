#include <iostream>
using namespace std;

int main()
{
    int matris1[2][2];
    int matris2[2][2];
    int matris3[2][2];

    for(int i  = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            cin>>matris1[i][j];
        }
    }
    for(int i  = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            cin>>matris2[i][j];
        }
    }
    for(int i  = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            matris3[i][j] = matris1[i][j] + matris2[i][j];
        
        }
    }
    cout<<"iki matrisin toplami: "<<endl;
    for(int i  = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            cout<<matris3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}
