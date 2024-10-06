#include <iostream>
#include <string>
using namespace std;

void liatStruk(string menu[], int harga[], int jumlah[], int sub_total[], int total_bayar, int i);

int main () {
	int pilih[10], jumlah[1000], sub_total[10], harga[10];
	string menu[10], nama;
	int total_bayar;
	int i = 0;
	bool selesai = false;
	
	cout << "-----------------------------------------------------------------\n";
	cout << "******************** WELCOME TO KAWAN RESTO **********************\n";
	cout << "-----------------------------------------------------------------\n";
	cout << "\n";
	cout << "Nama Pemesan : " << nama;
	cin >> nama;
	cout << "\n";
	cout << "               < Halo " << nama << "! Silahkan lihat menu! >    ";
	cout << "\n" << "\n";
	cout << "-----------------------------------------------------------------\n";
	cout << "***************************** MENU ******************************\n";
	cout << "-----------------------------------------------------------------\n";
	cout << "\n";
	cout << "1.  Es Kul - Kul                                         Rp 2000/pcs\n";
	cout << "2.  Dimsum                                               Rp 1000/pcs\n";
	cout << "3.  Roti Bakar                                           Rp 5000/pcs\n";
	cout << "4.  Siomay                                               Rp 2000/pcs\n";
	cout << "5.  Matcha Latte                                         Rp 15000/pcs\n";
	cout << "6.  Ketan Durian                                         Rp 5000/pcs\n";
	cout << "7.  Burger                                               Rp 10000/pcs\n";
	cout << "8.  Ayam Geprek                                          Rp 10000/pcs\n";
	cout << "9.  Es Ketan Wasii                                       Rp 5000/pcs\n";
	cout << "10. Nasi Bakar                                           Rp 7000/pcs\n";
	cout << "\n";
	cout << "(Silahkan tekan 0 jika sudah selesai memesan!) \n";
	cout << "\n";
