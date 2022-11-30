// * ---------------------------- */
/* Penggunaan Call By Reference */
/* Program Tambah Nilai */
/* ---------------------------- */
 #include<iostream>
 using namespace std;

 void tambah (int *v, int *r);

 int main()
 {
   int m, q;
   m = 4;
   q = 6;

   cout << "Nilai Sebelum Pemanggilan Fungsi";
   cout << "\nm = " << m << " q = " << q;
   tambah (&m, &q);
   cout << endl;
   cout << "\nNilai Setelah Pemanggilan Fungsi";
   cout << "\nm = " << m << " q = " << q;
   getchar();
   }
void tambah (int *v, int *r)
{
  *v+=7;
  *r+=5;
  cout << endl;
  cout << "\nNilai di Akhir Fungsi Tambah()";
  cout << "\nv = " << *v << " r = " << *r;
  }