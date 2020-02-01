#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string base2dec;
    char s;
    int ten = 0, n = 16;
    cin >> base2dec;
    for (int i = 1; i <= base2dec.size(); i++)
    {
        s = base2dec[base2dec.size() - i];
        if (s >= '0' and s <= '9')
        {
            ten += (s - '0') * pow(n, i - 1);
        }
        else
        {
            ten += (s - 'A' + 10) * pow(n, i - 1);
        }
    }
    cout << endl << ten;
}
