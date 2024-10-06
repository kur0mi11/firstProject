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
	cout << "******************** WELCOME TO KAWAN RESTO *********************\n";
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

       while(selesai == false){
           cout<<"Kamu mau pesan apa saja kawan?\n";
           cin>>pilih[i];

        if(pilih[i] <= 10){

          if(pilih[i] == 0){
	  selesai = true;
	break;
	  }else{
		switch (pilih[i]){
			case 1 : menu[i] = "Es Kul - Kul"; harga[i] = 2000; break;
			case 2 : menu[i] = "Dimsum"; harga[i] = 1000; break;
			case 3 : menu[i] = "Roti Bakar"; harga[i] = 5000; break;
			case 4 : menu[i] = "Siomay"; harga[i] = 5000; break;
			case 5 : menu[i] = "Matcha Latte"; harga[i] = 15000; break;
			case 6 : menu[i] = "Ketan Durian"; harga[i] = 5000; break;
			case 7 : menu[i] = "Burger"; harga[i] = 5000; break;
			case 8 : menu[i] = "Ayam Geprek"; harga[i] = 10000; break;
			case 9 : menu[i] = "Es Ketan Wasii"; harga[i] = 5000; break;
			case 10 : menu[i] = "Nasi Bakar"; harga[i] = 5000; break;
		}
		  cout<<"\n";
		  cout<<"Mau berapa kawan"<<menu[i]<<"nya?\n";
		  cout<<"Aku mau:";
		  cin>>jumlah[i];
		  cout<<"\n";
	  }

	sub_total[i] = jumlah[i]*harga[i];
	total_bayar+=sub_total[i];
	i++;


        } else {
		cout << "Kamu salah tekan ya kawan? \n";
		cout << "Gapapa! Coba lagi ya ^^ \n";
		cout << "\n";
	}
       }
	liatStruk(menu, harga, jumlah, sub_total, total_bayar, i);
	
	return 0;
}

void liatStruk(string menu[], int harga[], int jumlah[], int sub_total[], int total_bayar, int i) {

cout << "\n";

cout << "=================================================================\n";

cout << "*********************** STRUK PEMBAYARAN ************************\n";

cout << "=================================================================\n";

cout << "NO | NAMA MENU | HARGA/pcs | JUMLAH | SUB TOTAL \n";

cout << "-----------------------------------------------------------------\n";

for (int a = 0; a < i; a++){

cout << a+1 << " | " << menu[a] << " | " << harga[a] << " | " << jumlah[a] << " | " << 

sub_total[a] << endl;

}

cout << "\n";

cout << "-----------------------------------------------------------------\n";
