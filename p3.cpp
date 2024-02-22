#include <iostream>

using namespace std;

// fungsi demo statik variabel
int staticVariabel();
// class demo mutabel variabel
class MutableVar
{
public:
   mutable int umur;
   int noHp;

   MutableVar(int umur, int noHp)
   {
      this->umur = umur;
      this->noHp = noHp;
   }
};

int main()
{
   cout << "JENIS-JENIS VARIABEL" << endl;
   string var = "Variabel";
   cout << endl;

   // statik variabel => nilai variabel akan terus disimpan meskipun variabel tersebut dideklarasikan di fungsi lain
   cout << "Statik " << var << endl;
   int a(2);
   for (int i = 0; i < 3; i++)
   {
      cout << "nilai a di fungsi main = " << a << endl;
      cout << "nilai a di fungsi statikVariabel = " << staticVariabel() << endl;
   }
   cout << endl;

   cout << "Auto " << var << endl;
   // auto variabel => variabel yg secara otomatis menentukan jenis tipe datanya
   // dan tidak bisa ganti-ganti data, jika diawal tipe datanya integer maka seterusnya integer
   auto b{3.6};
   cout << "nilai b " << b << endl;
   // b = "aziz"  // ini akan error karena berbeda tipe data.
   cout << endl;

   cout << "Konstan " << var << endl;
   // konstan variabel => variabel yg nilainya tdk bisa di ganti.
   const float phi(3.14);
   cout << "nilai phi " << phi << endl;
   cout << endl;

   cout << "Mutabel " << var << endl;
   // mutabel variabel => variabel secara khusus digunakan didlm class, dan fungsinya kebalikan dari variabel konstan
   const MutableVar obj = MutableVar(21, 1234);
   cout << "Data Sebelum Diganti" << endl;
   cout << "noHp = " << obj.noHp << endl;
   cout << "umur = " << obj.umur << endl;

   cout << "Data Sesudah Diganti" << endl;
   // obj.noHp = 8228; // ini akan error karena variabelnya tidak di set ke mutabel
   obj.umur = 20;
   cout << "noHp = " << obj.noHp << endl;
   cout << "umur = " << obj.umur << endl;
}

int staticVariabel()
{
   static int a{1};

   return a++;
}
