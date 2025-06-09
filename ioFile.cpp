#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string baris;

    // membuat obyek output file stream dalam mode menulis
    ofstream outfile;
    // membuat file
    outfile.open("contohfile.txt");

    cout << ">= menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q")
            break;
            //menulis dan memasukkan nilai dari 'baris' ke dalam file
            outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //membuat obyek input file stream dalam mode membaca
    ifstream infile;;
    // membuka file 
    infile.open("contohfile.txt");

    cout << endl
         << ">= membuka dan membaca file" << endl;
    // jika file ada maka 
    if (infile.is_open())
    {
        