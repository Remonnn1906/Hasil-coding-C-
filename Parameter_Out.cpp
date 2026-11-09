#include <iostream>
using namespace std;

int Nil1 = 5, Nil2 = 10, Nil3 = 15;
int Hasil;

void Jumlah(int A, int B, int *C, int *D, int *E)

{
    *C = A + B;
    *D = A - B;
    *E = A * B;
}

int main()
{
    Tambah(Nil1, Nil2, Nil3 &Hasil);
    cout << "Hasil Penjumlahan : " << Nil1 << " + " << Nil2 << " = " << Hasil << endl;

    Bagi(Nil1, Nil2, Nil3 &Hasil);
    cout << "Hasil Pembagian   : " << Nil1 << " / " << Nil2 << " = " << Hasil << endl;

    Kali(Nil1, Nil2, Nil3 &Hasil);
    cout << "Hasil Perkalian   : " << Nil1 << " x " << Nil2 << " = " << Hasil << endl;

    system("pause");
    return 0;
}
