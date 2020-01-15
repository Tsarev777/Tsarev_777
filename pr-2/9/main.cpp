#include <iostream>
#include "TXLib.h"

using namespace std;

    float uniform ( float a, float b)
{
    return a + (b - a)* rand()/RAND_MAX;
}
void pythagorasTree ( float x, float y, float L, float angle, int levels)
{
    if ( levels <= 0 ) return;
    const float k = 0.7;
    const float angle2 = angle + 40 + uniform( -5, 5 );
    const float angle1 = angle - 45 + uniform( -10, 10 );
    const float angle3 = angle + 30 + uniform( -15, 15 );
    float x1 = x + L*cos ( angle*M_PI/180 );
    float y1 = y -L*sin ( angle*M_PI/180 );
    txLine (x, y, x1, y1 );

    int n = uniform(1, 3);

    if (n == 1)
        pythagorasTree( x1, y1, k*L, angle1, levels-1 );
    if (n == 2) {
    pythagorasTree( x1, y1, k*L, angle2, levels-1 );
    }
    if (n == 3){
        pythagorasTree( x1, y1, k*L, angle3, levels-1 );
        pythagorasTree( x1, y1, k*L, angle1, levels-1 );
        pythagorasTree( x1, y1, k*L, angle2, levels-1 );
    }
}

int main()
 {

  const int width = 800 , height = 600;
  txCreateWindow ( width, height );
  txSetFillColor ( TX_WHITE );
  txSetColor (TX_BLACK );
  const float L = 200, angle = 90;
  const int levels = 10;
  while ( ! GetAsyncKeyState(VK_ESCAPE)){
    txClear();
    pythagorasTree ( width/2, height, L, angle, levels );
    txSleep(50);
  }
}
