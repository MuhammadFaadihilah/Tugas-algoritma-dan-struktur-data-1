#include<iostream>
using namespace std;

long int pangkat (int v, int r);
int main()
{
  int m, q; 
  cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF " << endl << endl;
  cout << "Masukkan nilai M = ";
  cin >> m;
  cout << "Masukkan nilai Q = ";
  cin >> q;
  cout << endl << m << " Dipangkatkan " << q << " = ";
  cout << pangkat (m, q);
  
}
long int pangkat (int v, int r){
if (r==0)
    return (1);
  else
    return (v * pangkat (v,r-1));
}