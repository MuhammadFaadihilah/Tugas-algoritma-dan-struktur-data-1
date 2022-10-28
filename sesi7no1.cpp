#include <iomanip>
#include <iostream>
using namespace std;

int main() 
{
  int i;
  char nama[5][20];
  float nilai1[5];
  float nilai2[5];
  float hasil[5];

  for (i = 1; i <= 2; i++) {
    cout << "Data Ke - " << i << endl;
    cout << "Nama Siswa = ";
    cin >> (nama[i]);
    cout << "Nilai MidTest = ";
    cin >> nilai1[i];
    cout << "Nilai Final = ";
    cin >> nilai2[i];
    hasil[i] = (nilai1[i] * 0.40) + (nilai2[i] * 0.60);
    cout << endl;
  }
  cout << "---------------------------------------------";
  cout << "----------" << endl;
  cout << "No.";
  cout << "Nama Siswa";
  cout << "\t\t\t\tNilai";
  cout << "\tNilai";
  cout << "\tHasil" << endl;
  cout << " \t\t\t\t\t\t\tMidTest Final ";
  cout << "\tUjian" << endl;
  cout << "---------------------------------------------";
  cout << "----------" << endl;
  for (i = 1; i <= 2; i++) {
    cout << setiosflags(ios::left) << setw(4) << i;
    cout << setiosflags(ios::left) << setw(20) << nama[i];
    cout << setprecision(2) << "\t" << nilai1[i];
    cout << setprecision(2) << "\t\t" << nilai2[i];
    cout << setprecision(2) << "\t\t" << hasil[i] << endl;
  }
  cout << "---------------------------------------------";
  cout << "----------" << endl;
  getchar();
}