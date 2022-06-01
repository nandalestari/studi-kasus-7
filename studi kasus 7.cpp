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
