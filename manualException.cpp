#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw("halo"); //melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl; 
    }
    catch(int a)
    {
        // blok kiri akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch(...)
    {
        /*jika selain integer maka block ini akan dieksekusi*/
        cout << "deafult pengecualian dieksekusi" << endl;
   