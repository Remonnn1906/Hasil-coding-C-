#include <iostream>
using namespace std;

struct MAHASISWA{
    char* NIM;
    char* Nama;
    char* Alamat;
    char* Jurusan;
};
MAHASISWA X;
int main()
{
    X. NIM    = "2607415002";
    X. Nama   = "Rama Alfajri";
    X. Alamat = "Jl. Raya Cileungsi No 1, Bogor";
    X. Jurusan = "Teknik Informatika Kerjasama LZPU";

    cout<<"NIM    : "<<X.NIM<<endl;
    cout<<"Nama   : "<<X.Nama<<endl;
    cout<<"Alamat : "<<X.Alamat<<endl;
    cout<<"Jurusan : "<<X.Jurusan<<endl;
    
    system("pause");
    return 0;
}