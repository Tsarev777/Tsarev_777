#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
        int x,b,c,a;
    cin>>x;
    if (x<1000||x>9999 ) {
        cout <<"error"<<endl;
        return 0;
    }
    b=x%10;
    x=x/10;
    c=x%10;
    x=x/10;
    a=x%10;
    x=x/10;

        cout <<"да"<<endl;

    return 0;
}
