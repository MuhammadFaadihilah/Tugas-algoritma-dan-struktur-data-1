#include <iostream>
using namespace std;

int main()
{
  cout << "~~  Program C++ Segitiga Bintang  ~~" << endl;
  cout << "====================================" << endl;
  cout << endl;

  int tinggi_segitiga,k,l;
    cout << "Input tinggi segitiga: ";
    cin >> tinggi_segitiga;
    cout << endl;

  for(k=1;k<=tinggi_segitiga;k++) {
  for(l=1;l<=k;l++) {
    cout << " *";
  }
    cout << endl;
  }

  return 0;
}