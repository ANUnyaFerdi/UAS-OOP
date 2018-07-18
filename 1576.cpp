#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;

void ferdi()
	{
    cout<<"================================================="<<endl;
	cout<<"|==  FERDIANSYAH PUTRA FADHILAH (17.11.1576)  ==|"<<endl;
	cout<<"================================================="<<endl;
	system("pause");
	}
	
	void hdr()
	{
    cout<<"================================================="<<endl;
	cout<<"|==  APLIKASI KONVERTER SUHU DARI CELCIUS     ==|"<<endl;
	cout<<"================================================="<<endl;
	}

class konverter
{
public:

    double c,f,r,k;

	void fahrenheit()
	{
		system("cls");
        cout<<endl;
        cout<<" Masukkan Suhu dalam Celcius : ";cin>>c;
        f=c*1.8 + 32;
        cout<<" Suhu Dalam Fahrenheit       :"<<f<<endl;
        system("pause");
    }
    
    void kelvin()
    {
     	system("cls");
        cout<<endl;
        cout<<" Masukkan Suhu dalam Celcius : ";cin>>c;
        k=c+273.15;
        cout<<" Luas Permukaan Kelvin       : "<<k<<endl;
        system("pause");
    }

    void reamur()
    {
    	system("cls");
        cout<<endl;
      	cout<<" Masukkan Suhu dalam Celcius : ";cin>>c;
        r=c*0.8;
        cout<<" Luas Permukaan reamur       : "<<r<<endl;
        system("pause");
    }
};



int main()
{    
    int pilih;
    
    	ferdi();
		system("cls");
menu:
		system("cls");
		hdr();
    	cout<<"\nKonverter Suhu dari Celcius ke: "<<endl;
        cout<<"1. Fahrenheit"<<endl;
        cout<<"2. Kelvin"<<endl;
        cout<<"3. Reamur"<<endl;
        cout<<"0. KELUAR"<<endl;

    cout<<"\nMasukkan Menu Yang Anda Inginkan : ";cin>>pilih;
     konverter ke;
    switch (pilih)

    {
    case 1:ke.fahrenheit();
        goto menu;
        break;
    case 2:ke.kelvin();
        goto menu;
        break;
    case 3:ke.reamur();
        goto menu;
        break;
    case 0:
    	system("cls");
		cout<<"\n\t\tSAMPAI JUMPA "<<endl;

}
}
