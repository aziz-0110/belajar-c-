#include <iostream>
#include <cstdlib>

using namespace std;

int tipeData();
int login();

int main()
{
   // tipeData();
   login();

   return 0;
}

int tipeData()
{
   // tipe data
   unsigned int a{20U};                  // untuk memasukkan nilai unsigned harus berakhiran U
   long b{8811L};                        // unutk memasukkan nilai long harus berakhiran L
   unsigned long c{1235321UL};           // unutk memasukkan nilai unsigned long harus berakhiran UL
   unsigned long long d{21332213452ULL}; // unutk memasukkan nilai unsigned long long harus berakhiran ULL

   // tipe data biner
   int e{0b00000110}; // awalan 0b untuk biner
   int f{0377};       // awalan 0 untuk oktal
   int g{255};        // tidak menggunakan awalan desimal
   int h{0x1111a111}; // awalan 0x untuk heksadesimal

   cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\nd = " << d
        << "\ne = " << e << "\nf = " << f << "\ng = " << g << "\nh = " << h << endl;

   return 0;
}

int login()
{
   unsigned int pin;
   unsigned int j{0};

   do
   {
      cout << "masukkan pin = ";
      cin >> pin;
      j++;
   } while (j < 3 && pin != 12345U);

   if (j == 3)
   {
      cout << "kesempatan anda habis!!" << endl;
      exit(1);
   }

   cout << "anda berhasil login!!\n"
        << endl;
   tipeData();

   return 0;
}