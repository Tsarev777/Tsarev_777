#include <iostream>
#include "TXLib.h"

using namespace std;

void pythagorasTree ( float x, float y, float L, float angle, int levels, int branchAngle )
{
    if ( levels <= 0 ) return;
    const float k = 0.7;
    const float angle2 = angle + 40 + branchAngle;
    const float angle1 = angle - 45 - branchAngle;
    const float angle3 = angle + 30 - branchAngle;
    float x1 = x + L*cos ( angle*M_PI/180 );
    float y1 = y -L*sin ( angle*M_PI/180 );
    txLine (x, y, x1, y1 );
    pythagorasTree( x1, y1, k*L, angle1, levels-1, branchAngle );
    pythagorasTree( x1, y1, k*L, angle2, levels-1, branchAngle );
    pythagorasTree( x1, y1, k*L, angle3, levels-1, branchAngle );

}

int main()
 {
     txCreateWindow(800,600);
    pythagorasTree( 300, 500, 100, 90, 7, 0 );
}

