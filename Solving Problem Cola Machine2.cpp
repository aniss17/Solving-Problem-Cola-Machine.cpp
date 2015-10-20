/*
 * Hello.cpp
 *
 *  Created on: 18 Oktober 2015
 *      Author: Rangga Agustiantino | 1517051163
 */
#include<iostream>

using namespace std;

int main(){
  int angka;
   cout<<"Mesin Minuman Tradisional\n\n";
   cout<<"Daftar Minuman Tradisional\n\n";
   cout<<"1.Beras Kencur"<<endl;
   cout<<"2.Kunyit"<<endl;
   cout<<"3.Sambiroto"<<endl;
   cout<<"4.Air Gula"<<endl;
   cout<<"5.Temulawak"<<endl;
   cout<<"\nmasukkan pilihan anda : ";
   cin>>angka;

   if(angka==1)
   cout<<"Anda Memesan Minuman Beras Kencur"<<endl;
   else
   if(angka==2)
   cout<<"Anda Memesan Minuman Kunyit"<<endl;
   else
   if(angka==3)
   cout<<"Anda Memesan Minuman Sambiroto"<<endl;
   else
   if(angka==4)
   cout<<"Anda Memesan Minuman Air Gula"<<endl;
   else
   if(angka==5)
   cout<<"Anda Memesan Minuman Temulawak"<<endl;
   else
   cout<<"Pilihan Yang Anda Masukkan Salah"<<endl;
   cout<<"\n\nTerima Kasih Telah Menggunakan Mesin Minuman Tradisional\n\n";

    return 0;
}
