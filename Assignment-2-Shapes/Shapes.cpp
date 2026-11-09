

#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    
    initgraph(&gd, &gm, "");

    
    setcolor(WHITE);
    line(80, 100, 250, 100);
    outtextxy(120, 115, "Straight Line");

    
    setcolor(RED);
    circle(160, 250, 55);
    outtextxy(140, 315, "Circle");

    
    setcolor(GREEN);
    rectangle(350, 150, 550, 270);
    outtextxy(410, 285, "Rectangle");

    setcolor(YELLOW);
    line(650, 270, 730, 130);
    line(730, 130, 810, 270);
    line(810, 270, 650, 270);
    outtextxy(700, 285, "Triangle");

    
    getch();

   
    closegraph();

    return 0;
}
