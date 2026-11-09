#include <iostream>
using namespace std;

// Fungsi Rekursif Faktorial
int Factorial(int n)    // <-- parameter harus "int n", bukan angka langsung
{
    if (n == 0)
        return 1;
    else
        return (n * Factorial(n - 1));
}

int main()
{
    int angka = 10;
    cout << "Faktorial dari " << angka << " = " << Factorial(angka) << endl;

    system("pause");
    return 0;
}


int main()
{
    int angka = 10;
    cout << "Faktorial dari " << angka << " = " << Factorial(angka) << endl;

    system("pause");
    return 0;
}