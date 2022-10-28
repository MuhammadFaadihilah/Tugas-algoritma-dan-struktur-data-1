#include <ctype.h>
#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
  char kalimat1[20] = "Teknik";
  char kalimat2[20] = "Informatika";

  cout << " kalimat pertama = ";
  cout << kalimat1;
  cout << endl;
  cout << " kalimat kedua = ";
  cout << kalimat2;
  cout << endl;
  strcat(kalimat1, kalimat2);
  cout << " Hasil Penggabungannya = " << kalimat1;
  return 0;
}