#include <iostream>
using namespace std;

// Fungsi Rekursif Fibonacci
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int jumlah = 13;

    cout << "Bilangan Fibonacci (" << jumlah << " bilangan pertama):" << endl;
    for (int i = 0; i < jumlah; i++)
    {
        cout << fibonacci(i);
        if (i < jumlah - 1)
            cout << ", ";
    }
    cout << endl;

    system("pause");
    return 0;
}
