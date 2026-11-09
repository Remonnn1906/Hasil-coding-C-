#include <iostream>
using namespace std;

int Faktorial(int n)    // <-- parameter harus "int n", bukan angka langsung
{
    if (n == 0)
        return 1;
    else
        return (n * Faktorial(n - 1));
}

int main()
{
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << "Faktorial dari " << angka << " = " << Faktorial(angka) << endl;

    system("pause");
    return 0;
}