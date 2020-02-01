#include <iostream>
#include <string>
using namespace std;

string bin2dec ( string s )
{
     int step =1;
     int sr=0;
         for (int i= s.size()-1; i>0; i--){
    int numb=s[i]-'0';
    sr+= numb * step;
    step*= 2;
}
    return to_string(sr);
}
    int main()
{

string s;
getline( cin , s );
s = bin2dec(s) ;
cout <<s;


}
