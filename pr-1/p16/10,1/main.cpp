#include <iostream>
#include "TXLib.h"

using namespace std;

int main()
{

int x,y;

cout<< "¬ведите координату по X"<< endl;
cin >>x;

cout <<"¬ведите координату по Y"<< endl;
cin >>y;

txCreateWindow (800,600);

txSetColour (TX_ORANGE,10);
txLine (x,y,x,y+150);
txLine (x,y+75,x-75,y+100);
txLine (x,y+75,x+75,y+100);
txLine (x,y+150,x+75,y+200);
txLine (x,y+150,x-75,y+200);
txSetColour(TX_PINK,15);
txLine(x+75,y+100,x+100,y+25);
txSetColour (TX_LIGHTGREEN, 75);
txLine (x,y,x,y);
return 0;
}
