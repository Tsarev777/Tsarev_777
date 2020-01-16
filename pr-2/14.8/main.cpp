#include <iostream>

using namespace std;

bool notand(bool a, bool b){
return !(a and b);
}
bool notOr(bool a, bool b){
return !(a || b);
}


int main()
{

    bool a,b;
    cin>>a>>b;
    cout << notand(a,b) << ' ' << notOr(a,b) << endl;
    return 0;
}
