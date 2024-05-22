#include <iostream>
using namespace std;

void pluss (int *angka1, int *angka2, int &hasil)
{
    hasil = *angka1 + *angka2;
}

void minuss (int *angka1, int *angka2, int &hasil)
{
    hasil = *angka1 - *angka2;
}

void multiply (int *angka1, int *angka2, int &hasil)
{
    hasil = *angka1 * *angka2;
}

void division (int *angka1, int *angka2, int &hasil)
{
    if (*angka2 != 0) {
        hasil = *angka1 / *angka2;
    } else {
        cout << "error" << endl;
        hasil = 0;
        }
}

int main()
{
    int angka1, angka2, hasil;
    char operasi;

    cout << "program kalkulator" << endl;
    cout << "masukkan angka 1" << endl;
    cin >> angka1;
    cout << "masukkan angka 2" << endl;
    cin >> angka2;

    cout << "mau operasi apa? (a. tambah, b. kurang, c. kali, d. bagi)" << endl;
    cin >> operasi;

    switch (operasi)
    {
    case 'a': pluss (&angka1, &angka2, hasil);
        cout << "hasilnya adalah : " << hasil << endl;
        break;
    case 'b': minuss (&angka1, &angka2, hasil);
        cout << "hasilnya adalah : " << hasil << endl;
        break;
    case 'c': multiply (&angka1, &angka2, hasil);
        cout << "hasilnya adalah : " << hasil << endl;
        break;
    case 'd': division (&angka1, &angka2, hasil);
        cout << "hasilnya adalah : " << hasil << endl;
        break;
    default:
        cout << "error" << endl;
        break;
    }
}