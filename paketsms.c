#include <iostream.h>
#include <conio.h>

main() {
float  a;
int x, y;
double b, c;
do
{
clrscr();
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"             MENU PILIHAN PAKET               \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"1. Paket Internet\n";
cout<<"2. Paket SMS\n";
cout<<"3. Paket nelpon"<<" "<<"\n";
cout<<"Pilih salah satu paket yang anda inginkan(1/2/3): "; cin>>x;
cout<<"\n";
switch(x)
{
case 1:
cout<<"===========Pilihan Paket Internet============";
cout<<" "<<"\n";
cout<<"1. Paket Seharian 30Mb Rp. 2000\n";
cout<<"2. Paket Bulanan 5GB Rp. 50000\n";
cout<<"Pilih pakaet yang anda inginkan(1/2): "; cin>>a;
if (a==1)
{
	class="MsoNormal"> cout<<"Anda Memimilih Paket Seharian 30MB Rp. 2000\n";
}
else if(a==2)
{
cout<<"Anda Memilih Paket Bulanan 5GB Rp. 50000\n";
}
else
{
cout<<"\nanda tidak memilih 1/2.";
}
break;

case 2:
cout<<"=========Anda memilih paket SMS==========";
cout<<" "<<"\n";
cout<<"1. Paket SMS seimnggu penuh Rp. 5000\n";
cout<<"2. Paket  SMS sebulan penuh Rp. 25000\n";
cout<<"Pilih pakaet yang anda inginkan(1/2): "; cin>>b;
if (b==1)
{
cout<<"Anda Memimilih Paket SMS seimnggu penuh Rp. 5000\n";
}
else if(b==2)
{
cout<<"Anda Memilih Paket SMS sebulan penuh Rp. 25000\n";
}
else
{
cout<<"\nanda tidak memilih 1/2";
}

break;

case 3:
cout<<"=========Anda memilih paket Nelpon=========";
cout<<" "<<"\n";
cout<<"1. Paket Nelpon seharian penuh Rp. 1500 \n";
cout<<"2. Paket Nelpon seminggu penuh Rp. 9000\n";
cout<<"Pilih pakaet yang anda inginkan(1/2): "; cin>>c;
if (c==1)
{
cout<<"Anda Memimilih Paket Nelpon seharian penuh Rp. 1500\n";
}
else if(c==2)
{
cout<<"Anda Memilih Paket Nelpon seminggu penuh Rp.9000\n";
}
else
{
cout<<"\nanda harus memilih 1/2";
}
break;
}
cout<<"\n\n jika anda ingin ke Menu Utama tekan(3): ";cin>>y;
}
while(y==3);
getch();
}
