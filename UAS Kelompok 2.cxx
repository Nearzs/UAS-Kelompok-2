#include<conio.h>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

struct data{
char nama[30];
int kode, stok;
};
data batas[100];


int a,b,c,d;

void garis(){
cout<<"===============================================================================\n";}

void urut(int a , data batas[30]){


 for(int i=0;i<a;i++)
 {
  data tp;
   for(int j = i+1;j < a ;j++ ){
   	for(int l=0 ; l < 30 ;l++){
   	 if(batas[i].nama[l] < batas[j].nama[l]){

   	  break ;
   	 }else if(batas[i].nama[l] > batas[j].nama[l]){

   	 	tp=batas[i];
   	 	batas[i] = batas[j];
   	 	batas[j] = tp;
   	 	break;
   	 }
   	}
   }

  }





}





void inputdata()
{    cout<<"\nJumlah Barang Yang Akan diinput : ";cin>>b;
   for(c=0;c<b;c++){
   cout<<"\nData ke-"<<c+1<<endl;
   cout<<"Kode Barang\t: " ;cin>>batas[a].kode;
   cout<<"Nama Barang\t: ";cin>>batas[a].nama;
   cout<<"Jumlah Barang\t: ";cin>>batas[a].stok;
   a++;}system("cls");}

void lihatdata()
{int i;
 garis();
 cout<<"================================Menampilkan Data===============================\n";
 garis();
/*
  cout<<"|NO"<<setw(9)<<"|"<<setw(10)<<"Kode Barang"<<setw(9)<<"|"<<setw(9)<<"Nama Barang"<<setw(18)<<"|"<<setw(9)<<"Jumlah Barang"<<setw(6)<<"|\n";
  */
 garis();

 urut(a,batas);

 for ( i = 0; i <a ;i++){
  cout<<"|"<<i+1<<setw(10)<<"|"<<setw(10)<<batas[i].kode<<setw(10)<<"|"<<setw(10)<<batas[i].nama<<setw(19)<<"|"<<setw(10)<<batas[i].stok<<setw(8)<<"|\n";

 }


  garis();

  }

void hapusdata()
{int x;
 cout<<"Hapus data ke-";cin>>x;
 if (x<=b){
 a--;
 for(int i=x-1;i<a;i++)
 {batas[i]=batas[i+1];}
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 getch();system("cls");}else{cout<<"data tidak ditemukan!!!";getch();system("cls");}
}

void editdata(){
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
c=b+1;
if (k<c){
cout<<"Kode Barang\t: ";cin>>batas[l].kode;
cout<<"Nama Barang\t: ";cin>>batas[l].nama;
cout<<"Jumlah Barang\t: ";cin>>batas[l].stok;
lihatdata();}

else {system("cls");
cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Erorr !!! Data ke-"<<k<<" Tidak Tersedia ++++++++++++++++++++++++++++++";}
getch();system("cls");
}
void atas(){
   char user[20], pass[4];
cout<<" Silakan Login terlebih dahulu \n";
    cout<<" Username : "; cin>>user;
      if(strcmp(user,"kelompok2")==0) {
        cout<<" User Berhasil Login\n";
        garis();
        cout<<endl;
        system("cls");
        }else{cout<< "User Tidak Ada\n";
        atas();
        }
    cout<<" Password : "; cin>>pass;
    if(strcmp(pass,"12345")==0) {
        cout<<" User Berhasil Login\n";
        garis();
        cout<<endl;
        system("cls");
        }else{cout<< "Password Salah\n";
        atas();
        }
}

int main()
{     int pilih;
 char w;
  garis();
  cout<<" \t\t Aplikasi Inventory Barang Kelompok 2 \n";
  garis();
  cout<<endl;
  atas();
  awal:
  garis();
  cout<<"================================ PILIHAN MENU =================================\n";
  garis();
  cout<<"\n1. Buat Data Barang";
  cout<<"\n2. Hapus Data Barang";
  cout<<"\n3. Lihat Data Barang";
  cout<<"\n4. Edit Data Barang";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {system("cls");inputdata();goto awal;}
  if(pilih==2)
   {system("cls");hapusdata();goto awal;}
  if(pilih==3)
   {system("cls");lihatdata();goto awal;}
  if(pilih==4)
   {system("cls");editdata();goto awal;}
  if(pilih==5)
   {system("cls");
    cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Y]                         [N]                  \n"<<endl;
    cout<<"                                         ";cin>>w;
    if(w=='y'||w=='Y')
    {system("cls");
     cout<<"\n\n\n\n\n******************************* PROGRAM SELESAI *******************************";}
    if(w=='n'||w=='N')
           {system("cls");goto awal;}}
  else
   {system("cls");cout<<" Pilihan tidak tersedia!!!\n";getch();system("cls");goto awal;}
}
