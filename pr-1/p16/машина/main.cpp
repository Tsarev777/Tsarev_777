#include <iostream>
#include "TXLib.h"
using namespace std;

void DrawCarBody(int x, int y)
{
    txCreateWindow(800,600);
        POINT  CarBody[8] = { {x,y}, {x,y-25}, {x+10,y-25},{x+40,y-45},{x+80,y-45},{x+100,y-25},{x+140,y-15},{x+140,y} };

        txSetFillColor(TX_PINK);

        txPolygon(CarBody, 8);
}

void DrawCarWindows()
{
    txSetFillColor(TX_BLACK);

    POINT BackWindow[4]={ {40,70},{65,55},{70,55},{70,70} };

    txPolygon(BackWindow, 4);

    POINT FrontWindow[4]={ {75,55}, {95,55}, {110,70}, {75,70} };

    txPolygon(FrontWindow,4);
}

void DrawCarWheels()
{
    txSetFillColor(TX_YELLOW);

    txCircle(48,95,20);

    txCircle(122,95,20);
}

int main()
{
    txCreateWindow(1000,1000);

    int x;
    cin>>x;
    int y;
    cin>>y;

    DrawCarBody(x,y);

    cin>>x;

    cin>>y;


    DrawCarWheels(x,y);

    cin>>x;

    cin>>y;


    DrawCarWindows(x,y);
    cin>>x;

    cin>>y;

    return 0;
}
