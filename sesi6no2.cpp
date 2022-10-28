#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
  char Ka[60] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
  cout << "kata yang ingin dibalikkan dan di rubah menjadi huruf kecil = " << endl << Ka << endl;
  int x = strlen(Ka);
  cout << endl << endl;
  cout << "menjadi = " << endl;
  for (int z = x - 1; z >= 0; z--) {
    Ka[z] =tolower (Ka[z]);
    cout << Ka[z]; 
  }
}