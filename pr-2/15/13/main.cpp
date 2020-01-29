#include <iostream>

using namespace std;

string off ( string a )
{
     int n= 0;
         for ( int i=0 ; i<=a.size(); i++)
          {
              if (a[i]== '1')
              n+=1;
          }
     if (n%2 ==0)
    a = "true";
      else
    a = "false";
      return a;
}







int main()
{

string a;
getline( cin , a );
a=off(a);
cout <<a;


}
