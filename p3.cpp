#include <iostream>

using namespace std;

int staticVariabel();
int main()
{
   cout << "JENIS-JENIS VARIABEL" << endl;

   // statik variabel => nilai variabel akan terus disimpan meskipun variabel tersebut dideklarasikan di fungsi lain
   cout << "Statik Variabel" << endl;
   int a(2);
   for (int i = 0; i < 3; i++)
   {
      cout << "nilai a di fungsi main = " << a << endl;
      cout << "nilai a di fungsi statikVariabel = " << staticVariabel() << endl;
   }

   cout << "Auto Variabel" << endl;
   auto int b{9};
}

int staticVariabel()
{
   static int a{1};

   return a++;
}