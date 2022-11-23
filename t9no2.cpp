//* Penggunaan Call By Value *//
//* Program Tambah Nilai *//
//* ------------------------ *//
#include <iostream>
using namespace std;

void tambah(int h, int i);
int main(){
  int d,c;
  d = 5;
  c = 9;

  cout << "Nilai Sebelum Fungsi Digunakan ";
  cout << "\nd = " << d << " c = " << c;
  tambah(d,c);
  cout << "\nNilai Setelah Fungsi Digunakan ";
  cout << "\nd = " << d << " c = " << c;
  cout << endl;
  getchar();
}
 void tambah(int h, int i){
  h+=5;
  i+=7;
  cout << "\n\nNilai di dalam Fungsi Tambah() ";
  cout << "\nh = " << h << " i = " << i;
  cout << endl;
}