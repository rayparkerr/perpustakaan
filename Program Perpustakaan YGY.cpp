#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
void garis()
{
cout<<"===============================\n";
}
class Perpustakaan
{
private :
string Judul,Penulis;
public :
void data (string judul_buku,string penulis_buku);
void info();
};
void Perpustakaan::data(string judul_buku,string penulis_buku)
{
Judul = judul_buku;
Penulis = penulis_buku;
}
void Perpustakaan::info()
{
cout<<"Judul Buku : "<<Judul<<endl;
cout<<"Penulis : "<<Penulis<<endl;
}
int main()
{
Perpustakaan Horror1;
Perpustakaan Horror2;
Perpustakaan Horror3;
Perpustakaan Comedy1;
Perpustakaan Comedy2;
Perpustakaan Comedy3;
Perpustakaan Fantasi1;
Perpustakaan Fantasi2;
Perpustakaan Fantasi3;
int pilihan;
do
{
cout <<endl;
cout << "\t\t **";
cout << endl;
cout << "\t\t * PROJECT MANEJEMEN PERPUSTAKAAN BOT *";
cout << endl;
cout << "\t\t **";
cout << endl;
cout << "\t\t PERPUSTAKAAN BOT";
cout << endl;
cout << "\t\t **";
cout << endl;
cout << "\t\t DAFTAR MENU";
cout << endl;
cout << "\t\t **" << endl;
cout << "\t\t *1. DAFTAR BUKU *" << endl;
cout << "\t\t *2. PEMINJAMAN BUKU *" << endl;
cout << "\t\t *3. SANKSI PERPUSTAKAAN BOT *" << endl;
cout << "\t\t **" << endl;
cout << " Apa yang anda lakukan (1-3) : ";
cin >> pilihan;
system("CLS");
cout << endl;
switch (pilihan)
{
case 1:
mulai:
cout<<"Genre Buku Horror : "<<endl;
garis();
Horror1.data("DANUR","RISA SARASWATI");
Horror2.data("SUNYIRURI","RISA SARASWATI");
Horror3.data("jURNAL RISA","RISA SARASWATI");
Horror1.info();
Horror2.info();
Horror3.info();
cout<<endl;
cout<<"Genre Buku Comedy : "<<endl;
garis();
Comedy1.data("MANUSIA SETENGAH SALMON","RADITYA DIKA");
Comedy2.data("MARMUT MERAH JAMBU","RADITYA DIKA");
Comedy3.data("UBUR - UBUR LEMBUR","RADITYA DIKA");
Comedy1.info();
Comedy2.info();
Comedy3.info();
cout<<endl;
cout<<"Genre Buku Fanstasi : "<<endl;
garis();
Fantasi1.data("BUMI","TERE LIYE");
Fantasi2.data("BULAN","TERE LIYE");
Fantasi3.data("MATAHARI","TERE LIYE");
Fantasi1.info();
Fantasi2.info();
Fantasi3.info();
break;
case 2:
struct data
{
char npm[30];
char nama[30];
char buku[60];
char pinjam[30];
char pengembalian[30];
} mahasiswa;
cout << "Masukan NPM : ";
cin >> mahasiswa.npm;
cout << "Masukan Nama : ";
fflush(stdin);
gets(mahasiswa.nama);
cout << "Judul Buku : ";
cin >> mahasiswa.buku;
cout << "Waktu Peminjaman : ";
cin >> mahasiswa.pinjam;
cout << "Watu Pengembalian : ";
cin >> mahasiswa.pengembalian;
cout << endl;
garis();
cout << "Tampilkan Struct Data"
<< "\nNama : " << mahasiswa.nama
<< "\nNpm : " << mahasiswa.npm
<< "\nJudul Buku : " << mahasiswa.buku
<< "\nWaktu Peminjaman  : "<< mahasiswa.pinjam
<< "\nWaktu Pengembalian : "<< mahasiswa.pengembalian;
cout << endl;
break;
case 3 :
const int MAX = 2000;
char buffer[MAX+1];
ifstream file_objek;
file_objek.open("Sanksi BOT.txt");
cout << "Membaca Isi File Sanksi BOT.txt\n";
while(file_objek)
{
file_objek.getline(buffer,MAX);
cout<<buffer<<endl;
}
{
	ofstream file_keluaran;
	file_keluaran.open("Sanksi YGY.TXT");
	file_keluaran<<"Sanksi Perpustakaan"<<endl;
	file_keluaran<<"1. Peminjam yang terlambat mengembalikan buku (koleksi umum) dikenakan sanksi denda sebesar Rp. 1000,- (seribu rupiah) per hari/per buku"<<endl;
	file_keluaran<<"2. Menghilangkan/merusak bahan pustaka perpustakaan harus mengganti dengan bahan pustaka yang sama atau denda uang sebesar 3 (tiga) kali harga terbaru bahan pustaka tersebut."<<endl;
	file_keluaran<<"3. Penggantian bahan pustaka yang hilang/rusak harus sudah terpenuhi dalam waktu paling lambat 7 hari setelah diketahui kehilangan/kerusakan."<<endl;
	file_keluaran<<"4. Peminjam yang merusak buku perpustakaan diwajibkan untuk mengganti atau membayar ganti rugi."<<endl;
	file_keluaran.close();
}
}
}
while(pilihan != 3);
return 0;
getch();
}
