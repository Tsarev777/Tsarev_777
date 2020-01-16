#include <iostream>

using namespace std;

    bool isAutomorph (int a ){
    int x=a , n=1;
    while( x > 0){
        n*=10;
        x/=10;
    }
    x=a*a;
    if ( x % n == a)
        return true;
        else
        return false;

    }
    int main ()
    {
        int a;
        cin >> a;
        if (isAutomorph(a) )
        cout<< "yes" <<endl;
        else
        cout<< "no" <<endl;
        return 0;
    }
