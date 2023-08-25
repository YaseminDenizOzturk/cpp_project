#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dizi[] = {32,65,-7,8,1,0,12,5,64,80};
    int n  = sizeof(dizi)/sizeof(int);

    sort(dizi,dizi+n);

    for(int i = 0;i < 10;i++){
        cout<<dizi[i]<<endl;
    }
}
