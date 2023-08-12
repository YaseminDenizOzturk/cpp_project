#include <iostream>
using namespace std;

int main()
{
string email;
string password;

string control_email = "yasemin@yasemin.com";
string control_password  = "abc";
cout << "---Oturum Acma---"<<endl;
cout << "Lutfen Kullanici Adinizi ve Sifrenizi Giriniz"<<endl;

cin>>email;
cin>>password;


if(control_email == email && control_password == password){
    cout<<"Basarili Giris";
}
else if(control_email == email && control_password != password){
    cout<< "Hatali Sifre!";
}
else if(control_email != email && control_password == password){
    cout<< "Email adresinizi kontrol edin!";
}
else{
    cout<< "Girilen Bilgiler Gecersiz!"<<endl;
    cout<< "Tekrar Dene / Uye Ol";
}
return 0;

}
