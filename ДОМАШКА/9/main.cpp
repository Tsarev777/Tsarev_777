#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int w,spaces ;
    cin >> w;
    getline(cin,s );
spaces = w-s.size();
spaces /= 2;
s = string (spaces,' ')+ s ;
    cout << s << endl;


return 0;
}
