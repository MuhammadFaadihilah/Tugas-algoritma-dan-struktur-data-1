#include <iostream>
using namespace std;

int main() 
{
  int bu, jumlah, max, min;
  int nilai[10] = {23, 6, 89,12, 45, 67, 9, 90,54, 30};
  for (int i = 0; i < 10; i++) {
    bu = nilai[i];
    if ( i == 1 ) {
      min = bu;
      max = bu;
    }
    else if ( min > bu ) {
      min = bu;
    }
    else if ( max < bu) {
      max = bu;
    }
    else {}
    }
  cout << endl;
  cout << "Nilai terkecil = " <<  min << endl;
  cout << "Nilai terbesar = " <<  max << endl;
}