#include <iostream>
using namespace std;

// fungsi untuk 2 user : Mahasiswa & Dosen
void dataUser(string tipe, string idLabel){
	string nama, id, jurusan;
	
	cout << endl;
	
	cout << "===================" << endl;
	cout << "FORM DATA " << tipe << endl;
	cout << "===================" << endl;
	cout << "masukan Nama 	 : ";
	getline(cin, nama);
	cout << "masukan " << idLabel << "      : ";
	getline(cin, id);
	cout << "masukan Jurusan  : ";
	getline(cin, jurusan);
	
	cout << endl;
	
	// output
	cout << "=== DATA " << tipe << " ===" << endl;
	cout << "Nama  	 : " << nama << endl;
	cout << idLabel << "      : " << id << endl;
	cout << "Jurusan  : " << jurusan << endl;
}


int main(){
	
	int opsi;
	
	// Input opsi
	cout << "===================" << endl;
	cout << "FORM PENGISIAN DATA" << endl;
	cout << "1. Mahasiswa" << endl;
	cout << "2. Dosen" << endl;
	cout << "===================" << endl;
	cout << "Masukkan Pilihan Anda 1 / 2? ";
	cin >> opsi;
	cin.ignore();
	
	if (opsi == 1){
		dataUser("MAHASISWA", "Nim");
	}else if(opsi == 2){
		dataUser("DOSEN", "Nrp");
	}else{
		cout << "Tidak Tersedia" << endl;
	}
	
	return 0;
}
