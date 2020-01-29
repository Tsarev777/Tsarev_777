#include <iostream>

using namespace std;
string trim ( string s ){
        while ( s [0] == ' ' )
        s.erase( 0,1 );
        while ( s [s.size()-1] == ' ' )
        s.erase ( s.size() -1,1 );
 return s;
 }
int main()
{
    string s;
  getline ( cin, s );
  s = trim(s);
    cout << s;
  return 0;
}
