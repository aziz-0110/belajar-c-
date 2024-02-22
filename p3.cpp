#include <iostream>

using namespace std;

int staticVariabel();
int main()
{
   cout << "JENIS-JENIS VARIABEL" << endl;
   string var = "Variabel";

   // statik variabel => nilai variabel akan terus disimpan meskipun variabel tersebut dideklarasikan di fungsi lain
   cout << "Statik " << var << endl;
   int a(2);
   for (int i = 0; i < 3; i++)
   {
      cout << "nilai a di fungsi main = " << a << endl;
      cout << "nilai a di fungsi statikVariabel = " << staticVariabel() << endl;
   }

   cout << "Auto " << var << endl;
   // auto variabel => variabel yg secara otomatis menentukan jenis tipe datanya
   // dan tidak bisa ganti-ganti data, jika diawal tipe datanya integer maka seterusnya integer
   auto b{3.6};
   cout << b << endl;
   // b = "aziz"  // ini akan error.
}

int staticVariabel()
{
   static int a{1};

   return a++;
}