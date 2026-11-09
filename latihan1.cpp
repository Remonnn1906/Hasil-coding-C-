#include<iostream>
using namespace std;

int main()
{
     int Jam = 1;
     int Menit = 30;
     int Detik = 45;
     int D;

     D = (Jam * 3600) + (Menit * 60) + Detik;
     cout <<"Jumlah lama dalam hitungan detik adalah : " <<D<<endl;

     system ("Pause");
     return 0;
}