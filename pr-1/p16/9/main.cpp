#include <iostream>
#include "TXLib.h"

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
int x,y;

    cout << "������� ���������� �� X(��� ������) " << endl;
    cin >>x;



cout << "������� ���������� �� Y(��� ������) " << endl;
cin>>y;

   cout << "������� ���������� �� X2(��� ��������) " << endl;
    cin >>x;
    cout << "������� ���������� �� Y2(��� ��������) " << endl;
    cin>>y;


    txCreateWindow(800,600);
    txSetColor (TX_PINK ,10);
    txLine(100 ,200, 200,100 );
        txSetColor (TX_PINK ,10);
    txLine(200 ,100, 300,200 );
    txSetColor (TX_PINK ,10);
    txLine(200,100, 200, 300 );
    txSetColor (TX_PINK ,10);
      txLine(200 ,300, 100,400 );
      txSetColor (TX_PINK ,10);
    txLine(200 ,300, 300,400 ); 200
    txSetFillColour(TX_MAGENTA );

    txCircle(x,y,50 );
    txSetColor (TX_BLUE,5);
    txLine(300 ,200, 400,100 );







    return 0;
}
