#include <iostream>
using namespace std;
#define harga 4500.02

int main() {
  float jumlah, total;
  cout << "masukan jumlah barang = ";
  cin >> jumlah;
  total = harga*jumlah;
  cout << "\nyang harus dibayar =\n" << total;

  return 0;
}