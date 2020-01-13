#include <iostream>
#include "TXLib.h"

using namespace std;

void pythagorasTree ( float x, float y, float L, float angle, int levels )
{
    if ( levels <= 0 ) return;
    if (levels <= 0) txSetColour(TX_ORANGE);
    const float k = 0.7;
    const float angle1 = angle - 45;
    const float angle2 = angle + 45;
    float x1 = x + L*cos ( angle*M_PI/180 );
    float y1 = y -L*sin ( angle*M_PI/180 );

if (levels <= 3) txSetColour(TX_BLUE);
    txLine (x, y, x1, y1 );
    if (levels <= 4) txSetColour(TX_RED);
    pythagorasTree( x1, y1, k*L, angle1, levels-1 );
    pythagorasTree( x1, y1, k*L, angle2, levels-1 );

}

int main()
 {
     txCreateWindow(800,600);
    pythagorasTree( 300, 500, 100, 90, 10 );
}

