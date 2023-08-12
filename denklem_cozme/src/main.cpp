#include <iostream>
using namespace std;

int main()
{
    float a,b,c,x;

    cout << "Lutfen denklemde yer alan a , b, c, ve x degerlerini sirasiyla giriniz:"<<endl;
    cin>> a >> b >> c >> x;
    cout <<"Birinci derece denklem sonucu: "<< a*x + b <<endl;
    cout <<"İkinci derece denklem sonucu: " << a* x* x + b * x + c <<endl;
    return 0;

}
