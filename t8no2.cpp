#include <iostream>
using namespace std;

int main() {
  int harga[20], k, l, m[20], jumlah[20], totalharga, hargaakhir, pajak;
  char jenis;
  string tipe[20];
  cout << "GEROBAK FRIED CHICKEN" << endl;
  cout << "----------------------" << endl;
  cout << "Kode\tJenis\tHarga" << endl;
  cout << "----------------------" << endl;
  cout << " D\tDada\t Rp.2500" << endl;
  cout << " P\tPaha\t Rp.2000" << endl;
  cout << " S\tSayap\t Rp.1500" << endl;
  cout << "----------------------" << endl;
  cout << "Banyak Jenis = ";
  cin >> k;

  for (l = 0; l < k; l++) {
    cout << "Jenis ke - " << l + 1 << endl;
  ulang:
    cout << "Jenis Potong [D/P/S] : ";
    cin >> jenis;
    if (jenis == 'D' || jenis == 'd') {
      m[l] = 2500;
      tipe[l] = "Dada";
    } else if (jenis == 'P' || jenis == 'p') {
      m[l] = 2000;
      tipe[l] = "Paha";
    } else if (jenis == 'S' || jenis == 's') {
      m[l] = 3500;
      tipe[l] = "Sayap";
    } else {
      cout << "Input invalid.\n";
      goto ulang;
    }
    cout << "Banyak Potong : ";
    cin >> jumlah[l];

    harga[l] = jumlah[l] * m[l];
  }
  cout << "\t\t GEROBAK FIRED CHICKEN " << endl;
  cout << "-----------------------------------------" << endl;
  cout << "No.\tJenis\t Harga    Banyak    Jumlah" << endl;
  cout << "\tPotong \tSatuan    Beli      Harga " << endl;
  cout << "-----------------------------------------" << endl;
  for (l = 0; l < k; l++) {
    cout << l + 1 << "   " << tipe[l] << "\t  " << m[l] << "     " << jumlah[l]
         << "        Rp." << harga[l] << endl;
    totalharga += harga[l];
  }
  pajak = totalharga * 0.1;
  cout << "-----------------------------------------" << endl;
  cout << "\n\t\t\tHarga total = " << totalharga - 1;
  cout << "\n\t\t\tPajak 10%   = " << pajak;
  cout << "\n\t\t\tTotal Bayar = " << totalharga - 1 - pajak;
  cout << endl;
  return 0;
}