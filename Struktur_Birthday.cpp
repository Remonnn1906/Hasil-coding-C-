#include <iostream>
using namespace std;

struct date {
    int day;
    int month;
    int year;
};

struct mhs {
    char name[30];
    date birthday;
};
//deklarasi var mahasiswa bertipe struct student mahasiswa;
int main() {
    mhs student;
    cout<<" Nama Mahasiswa : ";
    cin>>student.name;

    student.birthday.day=19;
    student.birthday.month=6;
    student.birthday.year=2008;

    cout<<student.name<<endl;
    cout<<student.birthday.day<<'-';
    cout<<student.birthday.month<<'-';
    cout<<student .birthday.year<<endl;

    system("pause");
    return 0;
}
