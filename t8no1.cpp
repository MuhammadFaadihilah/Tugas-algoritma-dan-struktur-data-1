#include <iostream>
using namespace std;

int main() 
{  
  int e, f, g [30][30], b [30][30], jumlah [30][30], kurang [30][30], kali [30][30], h, i;
  cout << "Masukan Jumlah baris (1 - 30): ";
  cin >> f;
  cout << "Masukan Jumlah kolom (1 - 30): ";
  cin >> e;
  cout << endl << "Masukan matriks pertama: " << endl;
  for (h = 0; h < e; ++h)
  for (i = 0; i < f; ++i) {
    cout << "Matriks a" << h + 1  << i + 1  << " : ";
    cin >> g[h][i];
  }
  cout << endl << "Masukan matriks kedua: " << endl;
  for (h = 0; h < e; ++h)
  for (i = 0; i < f; ++i) {
    cout << "Matriks b" << h + 1 << i + 1 << " : ";
    cin >> b[h][i];
  }
  for (h = 0; h < e; ++h)
  for (i = 0; i < f; ++i)
  jumlah[h][i] = g[h][i] + b[h][i];
  cout << endl << "Penjumlahan kedua matriks: " << endl;
  for (h = 0; h < e; ++h)
  for (i = 0; i < f; ++i) {
    cout << jumlah[h][i] << " ";
    if (i == f - 1)
    cout << endl;
  }
  for (h = 0; h < e; ++h)
  for (i = 0; i < f; ++i)
  kurang[h][i] = g[h][i] - b[h][i];
  cout << endl << "Pengurangan kedua matriks: " << endl;
  for (h = 0; h < e; ++h)
  for (i = 0; i < f; ++i) {
    cout << kurang[h][i] << " ";
    if (i == f - 1)
    cout << endl;
  }
  for (h = 0; h < e; ++h)
  for (i = 0; i < f; ++i)
  kali[h][i] = g[h][i] * b[h][i];
  cout << endl << "Perkalian kedua matriks: " << endl;
  for (h = 0; h < e; ++h)
  for (i = 0; i < f; ++i) {
    cout << kali[h][i] << " ";
    if (i == f - 1)
    cout << endl;
  }
  return 0;
}