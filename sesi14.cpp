#include <iostream>
 #define maxstack 7  
// Merupakan inisialisasi bahwa variabel maxstack dapat menampung antrian sebanyak 7
 using namespace std;
 
 struct STACK{
 int s[7];
 int top;
 }; //merupakan deklarasi struck 
struct STACK st;
 void push (int data){
 if (st.top==maxstack){
 cout << "data penuh" <<endl;
 }else{
 st.top = st.top +1;
 st.s[st.top] = data;
 cout << "data ditambahkan" << endl;
 } 
 }
  /* merupakan fungsi untuk menambahkan data pada stack
   pada kondisi if memeriksa jika st.top == maxstack maka       
   tampilkan pesan "data penuh"
   jika salah maka st.top = st.top +1 dan st.s[st.top] = data, 
   lalu tampilkan pesan "data ditambahkan" */
 void pop(){
 if (st.top==-1){
 cout << "data kosong" <<endl;
 }else{
 st.top = st.top-1;
 cout << "data dihapus" << endl;
 }
 }
/* merupakan fungsi untuk mengurangi data yang terakhir kali
  ditambahkan pada stack
  pada kondisi if memeriksa jika st.top == 1 maka tampilkan     
  "data kosong" 
  jika salah maka st.top = st.top -1 dan tampilkan "data     
  dihapus" */
 void show(){
 if(st.top==-1){
 cout << "data kosong, tidak ada yang bisa ditampilkan";
 }else{
 for (int x=0;x<=st.top;x++){
 cout << st.s[x] << "=>";
}
 cout << endl;
 }
 }
/* merupakan fungsi untuk menampilkan data stack
  pada kondisi if memeriksa jika st.top == -1 maka tampilkan "    data kosong, tidak ada yang bisa ditampilkan "
  jika salah maka melakukan perulangan selama x<=st.top maka akan menampilkan st.s[x] dan "=>"*/
int main(){
 st.top = -1;
 push(1);
 push(2);
 push(3);
 push(4);
 push(5);
 push(6);
 push(7);
 // memanggil fungsi push dengan parameter/argumen 1 sampai 7
 pop();
 // memanggil fungsi pop
 show();
  // memanggil fungsi show 
 }