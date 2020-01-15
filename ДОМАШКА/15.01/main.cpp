#include <iostream>
#include <cmath>

using namespace std;

{
    cout << "insert the number *K* " << endl;
    int k,f=0;
    cin >> k;
f = pow(10, k);
k = pow(10, k-1);
    for (k; k < f; k++) {
    cout << k << endl;
}
return 0;
}
