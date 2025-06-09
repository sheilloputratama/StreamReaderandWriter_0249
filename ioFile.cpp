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
