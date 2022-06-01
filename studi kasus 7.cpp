// AULIA NANDA, BINTI SHOLIKHAH, AIDA AZZAHRA
#include<iostream>
using namespace std;

class toko{
	public:
		void barang();
		int inputan();
	private:
		int n;
};

void toko::barang(){
	cout << "======= TOKO KELONTONG =======\n";
	cout << "Penginputan Informasi Barang ";
	cout << "\n";
}

struct barang2{
	char id[30], barang[30], stok[30];
};

int toko::inputan(){
	cout << "\n";
	cout << "Masukkan Jumlah Barang : ";
	cin >> n;
	cout << "-----------------------------\n";
	barang2 m[n];
	for(int i=0; i<n; i++){
		cout << "ID Barang  : ";
		cin >> m[i].id;
		cout << "Nama Barang : ";
		cin >> m[i].barang;
		cout << "Jumlah Stok Barang  : ";
		cin >> m[i].stok;
		cout <<"----------------------------";
		cout <<"\n";
	}
