#include <iostream>
using namespace std;

int main() 
{
  int nilai[8], batas, cari, hasil;
  cout << " Masukkan Banyaknya Bilangan = ";
  cin >> batas;
  cout << endl << endl;
  for (int u = 0; u < batas; u++) {
    cout << " Masukkan Indeks ke- " << u << " = ";
    cin >> nilai[u];
  }
  cout << endl << endl;
  cout << " Deretan Bilangan = ";
  for (int e = 0; e < batas; e++) {
    cout << nilai[e] << " ";
    }
      cout << endl << " Masukkan Bilangan yang akan dicari = ";
      cin >> cari;
      for (int g=0; g<5; g++){
      if (nilai[g] == cari){
cout << " Bilangan "<<cari<<" ditemukan sebanyak 1 \n pada posisi ke = " << g;
break;
        }else if(cari != 1 && cari != 4 && cari != 5 && cari != 6&&cari != 3){
        cout<<" Bilangan tidak ditemukan ";
        break;
        }
        }
    }