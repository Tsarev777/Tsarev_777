#include <iostream>
#include <string>
using namespace std;

int main()
{
string go;
    getline(cin,go);
    int p=go.rfind("\\");
    if (p == string::npos ){
       cout << "no" << endl;
    }
else{
    cout << "yes";
    string t = go.substr(p+1);
    cout << t << endl;
return 0;
}
}
