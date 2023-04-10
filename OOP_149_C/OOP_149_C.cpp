#include <iostream>

using namespace std;

class mahasiswa {
public:
	string nim;
	string nama;
public: void cetak() {
	cout << " NIM = " << nim;
	cout << "\tNama = " << nama;
}
};

class matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << "\nMasukkan Kode Mata Kuliah : ";
		cin >> kode;
		cout << "Masukkan Nama Mata KUliah : ";
		cin >> namaM;
		cout << "Masukkan SKS Mata Kuliah : ";
		cin >> sks;
	}
	void tampil() {
		cout << "\nKode Mata Kuliah : " << kode;
		cout << "\nNama Mata Kuliah : " << namaM;
		cout << "\nSKS : " << sks;
	}
};

int main() {
	mahasiswa mhs1;
	matakuliah mk;

	cout << " Masukkan NIM : ";
	cin >> mhs1.nim;
	cout << " Masukkan nama : ";
	cin >> mhs1.nama;
	mhs1.cetak();
	mk.input();
	mk.tampil();
}