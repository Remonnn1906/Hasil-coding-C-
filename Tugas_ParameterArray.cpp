#include <iostream>
using namespace std;

    void inputArray (int A[], int N)

{ for (int i=0; i<N; i++)
 { cout<<"Masukkan elemen ke-"<<i+1<<':';
 cin>>A[i];
 }
}

    int nilaiMinimum (int A[], int N)
{       int min=A[0];
 for (int i=1; i<N; i++)
 { if (A[i]<min)
 min=A[i];
 }
 return min;
}

    int nilaiMaksimum (int A[], int N)
{       int max=A[0];
 for (int i=1; i<N; i++)
 { if (A[i]>max)
 max=A[i];
 }
 return max;
}

int main()
{
 int N;
 cout<<"Masukkan jumlah elemen: ";
 cin>>N;

 int A[N];
 inputArray(A, N);

 cout<<"Nilai Minimum: "<<nilaiMinimum(A, N)<<endl;
 cout<<"Nilai Maksimum: "<<nilaiMaksimum(A, N)<<endl;

 system("pause");
 return 0;
}