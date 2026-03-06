#include <iostream>
using namespace std;

int a[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukan panjang array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
    else
    {
        cout << "Error : maksimal input array adalah 20/n";
    }
    }

    cout << endl;
    cout << "masukan elemen array" << endl;
}