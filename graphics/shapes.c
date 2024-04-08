#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
    /// gd => Graphics Driver 
    /// gm => Graphics Mode
int gd=DETECT, gm;
initgraph(&gd,&gm,"C;\\TC\\BGI");

// //line(x1,y1,x2,y2)
// //cicle(x,y,radius)
// circle(100,100,50);
// //outtextxy(x,y,"text")
// outtextxy(75,170,"Circle");
// //rectangle(left,top,right,bottom)
// rectangle(200, 50, 350, 150);
// outtextxy(240,170," Rectangle");
// line(100,250,540,250);
// outtextxy(300,260,"Line");
// //ellipse(x,y,startangle,endangle,xradius,yradius)
// ellipse(500,100,0,360,100,50);
// outtextxy(480,170,"Ellipse");

rectangle(100,100,200,200);
outtextxy(150,210,"Rectangle");



getch();
closegraph();
}