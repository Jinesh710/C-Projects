

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void start()
{
setcolor(4);
rectangle(320-40,240-20,320+60,240+10);
setfillstyle(1,14);
floodfill(320-30,240-10,4);
outtextxy(320-30,240-10,"START GAME!");

}
void end()
{
setcolor(4);
rectangle(320-60,240-20,320+60,240+10);
setfillstyle(1,14);
floodfill(320-30,240-10,4);
outtextxy(320-40,240-10,"END GAME ...");
}
void name()
{
setcolor(4);
rectangle(320-60,240-20,320+60,240+10);
setfillstyle(1,14);
floodfill(320-30,240-10,4);
outtextxy(320-40,240-10,"BASKET BALL");
}
void main()
{
int c=0;
clrscr();
int gd=DETECT,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tcpp3\\bgi");
float v,temp;
double ang;
double x,y;
int h=0;
name();
delay(2500);
cleardevice();
start();
delay(2500);
cleardevice();
for(int i=1;i<=5;i++)
{
setcolor(1);
rectangle(100,10,630,470);

setcolor(1);
rectangle(100,425,130,470);

setcolor(15);
circle(115,420,5);

ellipse(615,235,0,360,15,10);
line(630,235,625,280);
line(600,235,605,280);
line(605,280,625,280);
cout<<"enter force\nbetween\n(80-150)\n";
cout<<"force=";
cin>>v;
cout<<"enter the angle";
cin>>ang; 
ang=(ang*3.14)/180;
x=115;
y=60;

 c=0;
for(int j=0;j<40;j++)
{
putpixel(x,y,15);
circle((int)(x),(int)(480-y),5);
y=x*tan(ang)-((10*x*x)/(2*v*v*cos(ang)*cos(ang)));
delay(100);
cleardevice();
x=x+20;
if(x>=600&&x<=630&&y>=225&&y<=245)
{
h=h+1;
c=1;
}

setcolor(1);
rectangle(100,10,630,470);

setcolor(1);
rectangle(100,425,130,470);

setcolor(15);
circle(115,420,5);
ellipse(615,235,0,360,15,10);
line(630,235,625,280);
line(600,235,605,280);
line(605,280,625,280);

}


if(c==1)
{

 outtextxy(320+50,240-50,"HIT !");
 if(i==5)
 {
 cout<<"Hit % = "<<h*20;
 }
 delay(2500);

 cleardevice();

 }
 else
 {
 outtextxy(320+50,240-50,"MISS !");
 if(i==5)
 {
 cout<<"Hit % = "<<h*20;
 }


 }



 }


end();
delay(2500);

getch();
}

