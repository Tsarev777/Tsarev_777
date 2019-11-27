#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    setlocale(LC_ALL,"Russian");
int  x1,y1,x2,y2;
 cout<<"введите координату 1";
    cin>>x1;
    cout<<"введите координату 2";
    cin>>y1;
    cout<<"введите координату х1";
    cin>>x2;
    cout<<"введите координату у2";
    cin>>y2;
double distance;

    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2)) ;

    cout<<"расстояние между точками"<<distance<<endl;
    cin.get();

}
