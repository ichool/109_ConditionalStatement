
#include <iostream>
using namespace std;
int main()
{
    srand(time(0));

    int nBilA, nBilB;
    string status;

 
    nBilA = rand() % 11;
    nBilB = rand() % 11;

    if (nBilA == nBilB) {
        status = "bilangan sama";

    }
    else if (nBilA > nBilB) {
        status = "billangan A lebih besar daripada bilanan B";
    }

    else {
        status = "bilangan A lebih kecil daripada bilangan B";

    }
    cout << " bilangan pertama = " << nBilA << endl;
    cout << " bilangan kedua = " << nBilB << endl;
    cout << " status bilangan = " << status << endl;


}

