#include <iostream>
using namespace std;

int pangkat2(int x)
{ int y;
 y = x*x;
//  jadi pada intinya si bintang itu berfungsi sebagai penaunjuk untuk mengakses nilai dari variabel yang ditunjuk oleh pointer.
 return y;
};
int main()
{ int Bilangan, Hasil;
 cout<<"Masukkan bilangan : ";
 cin>>Bilangan;
 Hasil = pangkat2(Bilangan);
 cout<<"pangkat dua dari "<<Bilangan<<" : "<<Hasil<<endl;

 system("pause");
 return 0;
}