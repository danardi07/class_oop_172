#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "NAMA= " << nama; 

	}
};

	class MataKuliah { 
	private:
		int sks;
		string kode;
		string namaMK;
	public:
		void inputMK() {
			cout << "\nMasukan Jumlah SKS= ";
			cin >> sks;
			cout << "\nMasukan Kode MK= ";
			cin >> kode; 
			cout << "\nMasukan Nama MK= ";
			cin >> namaMK;
		}



		void tampilMK() { 
			cout << "\Jumlah SKS= " << sks;
			cout << "\nKode MK= " << kode;
			cout << "\nNama MK= " << namaMK;

		};
	};

	int main() {
		 
		Mahasiswa mhs1;
		MataKuliah mk;
		 
		cout << "Masukan NIM = ";
		cin >> mhs1.nim; 
		cout << "Masukan Nama = ";
		cin >> mhs1.nama; 

		mk.inputMK();
		mhs1.tampil();
		mk.tampilMK();

	};


