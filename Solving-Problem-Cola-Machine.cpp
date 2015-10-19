/*
 * Hello.cpp
 *
 *  Created on: 18 Oktober 2015
 *      Author: Rangga Agustiantino | 1517051163
 */
#include<iostream>

using namespace std;

int main(){
int minuman;
cout<<"Mesin Minuman Tradisional\n\n";
cout<<" Masukkan angka Minuman Yang Anda Inginkan = \n";
cin>>minuman;
switch(minuman)
{
    case 1:cout<<"Beras Kencur";break;
    case 2:cout<<"Kunyit";break;
    case 3:cout<<"Sambiroto";break;
    case 4:cout<<"Air Gula";break;
    case 5:cout<<"Temulawak";break;
    default :cout<<"Angka Minuman Tidak Tersedia";break;

}
cout<<"\n\nTerima Kasih Telah Menggunakan Mesin Minuman Tradisional\n\n";

return 0;
}
