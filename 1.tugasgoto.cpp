#include<iostream>
using namespace std;

int main()
{
  int a, b;
  char lagi;
  atas:
  cout << "Masukkan Bilangan = ";
  cin >> a;
  b = a % 2;
  printf("Nilai %d %% 2 adalah = %d",a,b);
  printf("\n\nIngin Hitung Lagi [Y/T] : ");
  cin >> lagi;
  if (lagi == 'Y' | lagi == 'y'){
  goto atas; 
}
  if (lagi == 'T' | lagi == 't'){
  goto bawah;
}
  bawah:
  getchar();
}