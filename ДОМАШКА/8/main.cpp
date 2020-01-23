#include <iostream>
#include <string>
using namespace std;

int main()
{
string extractFileName;
getline(cin,extractFileName);
int n=extractFileName.rfind("\\");
if (n == string::npos )
cout <<"yes" << endl;
else cout << "no";
string t = extractFileName;
t.erase (n);
cout << t << endl;
return 0;
}
