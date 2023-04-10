#include <iostream>

using namespace std;

class mahasiswa {
public:
	string nim;
	string nama;
public: void cetak() {
	cout << " NIM = " << nim;
	cout << "\nNama = " << nama;
}
};

class matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << " Masukkan Kode Mata Kuliah : ";
		cin >> kode;
		cout << " Masukkan Nama Mata KUliah : ";
		cin >> namaM;
		cout << " Masukkan SKS Mata Kuliah : ";
		cin >> sks;
	}
	void tampil() {
		cout << " Kode Mata Kuliah : " << kode;
		cout << " Nama Mata Kuliah : " << namaM;
		cout << " SKS : " << sks;
	}
};