#include <iostream>
using namespace std;

// fungsi untuk 2 user : Mahasiswa & Dosen
void dataUser(string tipe, string idLabel){
	string nama, id, jurusan;
	
	cout << endl;
	
	cout << "===================" << endl;
	cout << "FORM DATA " << tipe << endl;
	cout << "===================" << endl;
	cout << "MASUKAN NAMA 	 : ";
	getline(cin, nama);
	cout << "MASUKAN " << idLabel << "      : ";
	getline(cin, id);
	cout << "MASUKAN JURUSAN  : ";
	getline(cin, jurusan);
	
	cout << endl;
	
	// output
	cout << "=== DATA " << tipe << " ===" << endl;
	cout << "NAMA  	 : " << nama << endl;
	cout << idLabel << "      : " << id << endl;
	cout << "JURUSAN  : " << jurusan << endl;
}


int main(){
	
	int opsi;
	
	// Input opsi
	cout << "===================" << endl;
	cout << "FORM PENGISIAN DATA" << endl;
	cout << "1. Data Mahasiswa" << endl;
	cout << "2. Data Dosen" << endl;
	cout << "===================" << endl;
	cout << "Masukkan Pilihan Anda [1-2]: ";
	cin >> opsi;
	cin.ignore();
	
	if (opsi == 1){
		dataUser("MAHASISWA", "NIM");
	}else if(opsi == 2){
		dataUser("DOSEN", "NRP");
	}else{
		cout << "Pilihan yang anda masukan tidak tersedia. Terimakasih." << endl;
	}
	
	return 0;
}
