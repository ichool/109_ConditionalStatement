#include <iostream>
using namespace std;

int main()
{
    //siswa mempunyai 2 nilai yaitu matematika dan fisika kemudian
    //dihitung rata ratamya jika rata rata lebih dari 60 maka di nyatakan
    //lulus atau setidaknya nilai matematika lebihdari 70 dan jika tidak keduanya 
    //maka dinyatakan tidak lulus 


    float nMatematika, nFisika, rerata;
    string status;

    cout << "Masukkan nilai Matematika: ";
    cin >> nMatematika;

    cout << "Masukkan nilai Fisika: ";
    cin >> nFisika;

    rerata = (nMatematika + nFisika) / 2;

    if (rerata >= 60)  {
        status = "lulus jalur rerata" ;
    }
    else if (nMatematika >= 70) 
    {
        status = "lulus jalur matemaika";
    }
    else
    {
        status = "tidak lulus";
    }
    cout << "statusnya adalah :" << status << endl;

    system("pause");
}

