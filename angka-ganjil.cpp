#include <iostream>
using namespace std;

int main()
{
    int i, *ganjil=&i;

    for (i=0; i < 20; i++)
    {
        if (i%2==1)
        {
            cout << i << "= " << ganjil << endl;
        }
        
    }
}