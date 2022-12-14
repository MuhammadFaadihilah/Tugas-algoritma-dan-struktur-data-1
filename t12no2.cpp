#include <iostream>

 using namespace std;

 struct mhs
 {
 char nama [20], nim [10],matkul [15];
 int sks;
 }; 

 struct mhs bayar [2];

 int main () {
 int bts, var, tetap;
 for (int i=0; i<2; i++)
 {
 //Input data
 cout << "\n\n-------------------------------\n";
 cout << "\nNama mhs = ";
 cin >> bayar[i].nama;
 cout << "NIM = ";
 cin >> bayar[i].nim;
 cout << "Mata Kuliah = ";
 cin >> bayar[i].matkul;
 
 input:
 cout << "Jumlah sks = ";
 cin >> bayar[i].sks;
   
 if (bayar[i].sks>2 || bayar[i].sks==1)
 {
 cout << "Program tidak sesuai\n";
 goto input;
 } 
 if (bayar[i].sks==0)
 {
 tetap = 250000;
 var = bayar[i].sks*250000;
 }else if (bayar[i].sks==2)
 {
 tetap = 300000;
 var = bayar[i].sks*300000;
 }cout << endl;

 //Output data
 cout << "\n\n-------------------------------\n";
 cout << " Output ";
 cout << "\n-------------------------------\n";
 cout << "\nNama mhs = " << bayar[i].nama;
 cout << "\nNIM = " << bayar[i].nim;
 cout << "\nMata Kuliah = " << bayar[i].matkul;
 cout << "\nJumlah sks = " << bayar[i].sks;
 cout << "\nSPP tetap = " << tetap;
 cout << "\nSPP variabel = " << var;
 cout << endl << endl;

 }
 }