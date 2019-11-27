#include <iostream>
#include "TXLib.h"

using namespace std;

int main()
{
    txCreateWindow(800,600);
    txSetPixel(100 ,100, TX_RED);
    txSetColor (TX_BLUE);
    txLine(100 ,200, 200,100 );

    return 0;
}
